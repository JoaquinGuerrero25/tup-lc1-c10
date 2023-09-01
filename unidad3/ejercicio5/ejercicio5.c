// - Escriba un programa que pida ingresar un número y a continuación escriba en la consola si el mismo es par o impar.
#include <stdlib.h>
#include <stdio.h>

int main () {
    int num;
    printf("Ingrese un numero: ");
    scanf("%i", &num);
    if (num % 2 == 0 ) {
        printf("El numero es par.\n");
    }
    else {
        printf("El numero es impar.\n");
    }
    system("pause");
    return 0;
}