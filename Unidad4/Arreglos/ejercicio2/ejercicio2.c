// Declarar un array de tipo entero de 5 componentes, asignarles un valor, mostrar la
// suma de sus componentes y el promedio.

#include <stdio.h>
#include <stdlib.h>

void main(){
    int numeros[5];
    int sumaNumeros = 0;
    float promedio = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese un numero entero en la posicion %d: ", i+1);
        scanf("%d", &numeros[i]);
        sumaNumeros += numeros[i];
    }
    promedio = sumaNumeros / 5;
    printf("La suma de todos los numeros ingresados es: %d\n", sumaNumeros);
    printf("El promedio de los numeros ingresados es: %0.1f\n", promedio);
}