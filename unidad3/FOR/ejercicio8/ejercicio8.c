// Escriba un programa que lea un número n1, y escriba la tabla de multiplicar del número.
#include <stdio.h>
#include <stdlib.h>

void main() {
    int num1, i;
    printf("Ingrese un numero: ");
    scanf("%i", &num1);
    printf("Tabla de multiplicar de %i:\n", num1);
    for( i = 1; i <= 10; i++){
        printf("%i x %i = %i\n", num1, i, num1 * i);
    }
    system("pause");
}