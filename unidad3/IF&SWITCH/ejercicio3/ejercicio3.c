//Dado un número introducido por el usuario, indicar si este es positivo, negativo o nulo.
#include <stdio.h>
#include <stdlib.h>

int main () {
    int num;
    printf("Ingrese un numero entero: ");
    scanf("%i", &num);
    if (num == 0) {
        printf("El numero es nulo.\n");
    }
    else if (num > 0) {
        printf("El numero es positivo.\n");
    }
    else{
        printf("El numero es negativo.\n");
    }
    system("pause");
    return 0;
}