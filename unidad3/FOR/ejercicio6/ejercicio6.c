// Suma de los 10 primeros números múltiplos de tres.
#include <stdio.h>
#include <stdlib.h>

void main() {
    int suma, i, contador;
    suma = 0;
    contador = 0;
    for( i=1; contador < 10; i++) {
        if (i % 3 == 0) {
            suma += i;
            contador++;
        }
    }
    printf("La suma de los 10 primeros multiplos de 3 es: %d\n", suma);
    system("pause");
}