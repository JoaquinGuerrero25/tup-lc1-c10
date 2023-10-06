// Declarar un array de tipo entero de 5 elementos, asignarles un valor, mostrar de la
// forma: “Índice: X, Valor: Y” en el orden ingresado y de atrás hacia adelante.

#include <stdio.h>
#include <stdlib.h>

void main() {
    int num[ ] = {1, 2, 5, 66, 8};
    printf("Indece: valor\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d : %d\n", i, num[i]);
    }
    printf("Indice : valor de atras hacia adelante.\n");
    for (int j = 4; j >= 0; j--)
    {
        printf("%d : %d\n", j, num[j]);
    }
    system("pause");
}