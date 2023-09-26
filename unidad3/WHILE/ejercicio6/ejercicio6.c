// Leer por consola notas hasta que el usuario lo indique e informar su suma y promedio

#include <stdio.h>
#include <stdlib.h>

void main() {
    float notas = 0;
    float sumaNotas = 0;
    float promedio = 0;
    int cantNotas = 0;
    char decision;
    do{
        printf("Ingrese una nota: ");
        scanf("%f", &notas);
        while (notas < 1 || notas > 10)
        {
            printf("La nota ingresadas es incorrecta. Ingrese una nota entre 1 y 10: ");
            scanf("%f", &notas);
        }
        sumaNotas += notas;
        cantNotas += 1;
        printf("Para ingresar otra nota ingrese 'S', en caso contrario ingrese 'N': ");
        scanf("%s", &decision);
    }while(decision != 'N' && decision != 'n');
    promedio = sumaNotas / cantNotas;
    printf("El promedio de las notas ingresadas es: %0.1f\n", promedio);
    system("pause");
}