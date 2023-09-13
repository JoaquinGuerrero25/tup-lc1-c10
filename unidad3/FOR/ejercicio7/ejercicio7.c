// Diseñe un algoritmo que sume los 20 primeros números impares
#include <stdio.h>
#include <stdlib.h>

void main() {
    int i, suma, contador; 
    suma = 0;
    contador = 0;
    for( i=1 ; contador <= 20; i++) {
        if(i % 2 == 1) {
            suma += i;
            contador++;
        }
    }
    printf("La suma de los primeros 20 numeros impares es: %i\n", suma);
    system("pause");
}