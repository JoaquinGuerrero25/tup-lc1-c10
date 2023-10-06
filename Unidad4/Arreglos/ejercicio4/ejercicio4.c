// Dado el vector {10, 20, 5, 15, 30, 20}
// a. Informar el vector de la forma: "Indice: X, Valor: Y".
// b. Totalizar el vector e informar el total.
// c. Informar el contenido de las posiciones impares.
// d. Informar las posiciones que contienen números impares.
// e. Informar el mayor número.
// f. Informar cuántas veces aparece el número 20. 


//------------------------------------------buscar una alternativa para hacerlo todo en un for o mas corto--------------------------

#include <stdio.h>
#include <stdlib.h>

void main() {
    int numeros[] = {10, 20, 5, 15, 30, 20};
    int totalVector = 0;
    int mayor = 0;
    int contador = 0;
    printf("A)\n");
    printf("Indice: Valor\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d: %d\n", i, numeros[i]);// a. Informar el vector de la forma: "Indice: X, Valor: Y".
        totalVector += numeros[i];// b. Totalizar el vector e informar el total.
    }
    printf("B)\n");
    printf("El valor total del vector es: %i\n", totalVector);
    
    printf("C)\n");
    for (int j = 0; j < 6; j++)// c. Informar el contenido de las posiciones impares.
    {
        if ((j%2) == 1)
        {
            printf("El valor en la posicion %d es: %d\n",j,numeros[j]);
        }
    }

    printf("D)\n");
    for (int j = 0; j < 6; j++)// d. Informar las posiciones que contienen números impares.
    {
        if ((j%2) == 1)
        {
            printf("posicion %d\n",j);
        }
    }

    printf("E)\n");// e. Informar el mayor número.
    for (int j = 0; j < 6; j++)
    {
        if (mayor<numeros[j])
        {
            mayor = numeros[j];
        }
    }
    printf("El mayor es: %d\n", mayor);

    printf("F)\n");// f. Informar cuántas veces aparece el número 20. 
    for (int j = 0; j < 6; j++)
    {
        if (numeros[j] == 20)
        {
            contador += 1;
        }
    }
    printf("La cantidad de veces que aparece el numero 20 es:  %d\n", contador);
}