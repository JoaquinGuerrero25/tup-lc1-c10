// Escriba un programa que lea 5 números por teclado, los copie a otro array
// multiplicados por 2 y muestre el segundo array. 

#include <stdio.h>
#include <stdlib.h>

void main()
{
    float array1[5];
    float array2[5];

    for (int  i = 0; i < 5; i++)
    {
        printf("Ingrese un numero en la posicion %i: ", i);
        scanf("%f", &array1[i]);

        array2[i] = 2 * array1[i];
    }
    for (int j = 0; j < 5; j++)
    {
        printf("Numero en la posicion %i: %0.1f\n", j, array2[j]);
    }

    system("pause");
    
}