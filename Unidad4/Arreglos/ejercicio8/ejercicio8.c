// Leer 10 números por teclado, 5 para un array y 5 para otro array distinto. Mostrar los
// 10 números en pantalla mediante un solo array. 
#include <stdio.h>
#include <stdlib.h>

void main()
{
    float array1[5], array2[5], array3[10];

    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
        {
            printf("Ingrese un numero en la posicion %i del primer array: ", i);
            scanf("%f", &array1[i]);
            array3[i]= array1[i];
        }
        else if (i > 4)
        {
            printf("Ingrese un numero en la posicion %i del segundo array: ", i);
            scanf("%f", &array2[i-5]);
            array3[i]= array2[i-5];
        }
    }
    for (int j = 0; j < 10; j++)
    {
        printf("%0.1f\n", array3[j]);
    }
    
    system("pause");

}