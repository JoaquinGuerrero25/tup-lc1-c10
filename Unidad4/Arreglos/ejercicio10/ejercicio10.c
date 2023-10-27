// Escriba un programa que lea una matriz cuadrada la presente en pantalla, y presente
// la suma de todos los números que no están en la diagonal principal. 

#include <stdio.h>
#include <stdlib.h>

void main() 
{
    float matrizCuadrada[3][3], sumaNumeros;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Ingrese un numero en la posicion %i,%i: ", i+1,j+1);
            scanf("%f", &matrizCuadrada[i][j]);

            if (i != j)
            {
                sumaNumeros += matrizCuadrada[i][j];
            }
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
        {
            printf(" %0.1f ", matrizCuadrada[i][j]);
        }
        
    }
    
    printf("\nLa suma de todos los numeros que no estan en la diagonal principal es: %f\n", sumaNumeros);
    
    system("pause");
}