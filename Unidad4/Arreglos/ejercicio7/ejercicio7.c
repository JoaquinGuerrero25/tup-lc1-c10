// Declarar un array de tipo decimal, que el usuario ingrese la cantidad de notas a cargar,
// leer las notas por consola, mostrar la suma de sus componentes y el promedio. 
#include <stdio.h>
#include <stdlib.h>

void main()
{
    float array[10];
    int cantNotas = 0;
    float sumaNotas;

    printf("Ingrese la cantidad de notas que desea registrar: ");
    scanf("%i", &cantNotas);
    while (cantNotas < 0 )
    {
        printf("Valor incorrecto. La cantidad de notas a ingresar debe ser 1 o mayor a 1: ");
        scanf("%i", &cantNotas);
    }
    for (int  i = 0; i < cantNotas; i++)
    {
        printf("Ingrese la nota para el alumno %i: ", i+1);
        scanf("%f", &array[i]);

        sumaNotas += array[i];
    }
    printf("La suma de todas las notas es: %0.1f\n", sumaNotas);
    printf("El promedio de todas las notas ingresadas es: %0.1f\n", sumaNotas / cantNotas );

    system("pause");

}