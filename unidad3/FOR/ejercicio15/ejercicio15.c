//  Se desea leer las calificaciones de 5 alumnos, por cada alumno se leen 3 calificaciones.
// Mostrar el promedio por alumno y el promedio general

#include <stdio.h>
#include <stdlib.h>

void main() {
    float nota, sumaNotaAlum, sumaNotaGen, promedioAlum, promedioGen, promedio;
    int i, j;
    promedioGen = 0;
    sumaNotaGen = 0;
    promedio = 0;
    for ( i = 1; i <= 5; i++)
    {
        promedioAlum = 0;
        sumaNotaAlum = 0;
        for ( j = 1; j <= 3; j++){
            printf("Ingrese la nota del examen %i: ", j);
            scanf("%f", &nota);
            sumaNotaAlum += nota;
        }
        promedioAlum = sumaNotaAlum / 3;
        promedio = promedio + promedioAlum;
        printf("El promedio del alumno %i es: %0.1f \n", i, promedioAlum);
    }
    promedioGen = promedio / 5;
    printf("El promedio general es: %0.1f\n", promedioGen);
    system("pause");
}