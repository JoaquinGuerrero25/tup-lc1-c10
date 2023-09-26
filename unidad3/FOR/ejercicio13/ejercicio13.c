// Imprimir por consola 10 renglones, de manera que se visualice la siguiente salida:
#include <stdio.h>
#include <stdlib.h>

void main() {
    int i, j, k;
    for (i = 10; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("@");
        }
        printf("\n");
    }
    system("pause");
}