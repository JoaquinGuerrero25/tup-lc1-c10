#include <stdio.h>
#include <stdlib.h>

void main() {
    float notaAlum, sumaNota, sumaPromAlum = 0, promedioTotal = 0, promedioAlumno = 0;
    int cantAlum = 0;
    int cantParciales = 0;

    do {
        printf("Ingrese la cantidad de alumnos: ");
        scanf("%i", &cantAlum);

        if (cantAlum < 1) {
            printf("Error: Debe ingresar un numero mayor o igual a 1.\n");
        }
    } while (cantAlum < 1);
    do {
        printf("Ingrese la cantidad de parciales: ");
        scanf("%i", &cantParciales);

        if (cantParciales < 1) {
            printf("Error: Debe ingresar un numero mayor o igual a 1.\n");
        }
    } while (cantParciales < 1);

    for(int i = 1; i <= cantAlum; i++){
        printf("Alumno %i\n", i);
        sumaNota = 0;
        for(int j = 1; j <= cantParciales; j++){
            do{
                printf("Ingresa la nota del alumno en el parcial %i: ", j);
                scanf("%f", &notaAlum);
                if( notaAlum < 0|| notaAlum > 10){
                    printf("Error: Debe ingresar una nota que se encuentre entre 0 y 10.\n");
                }
                sumaNota += notaAlum;
            }while(notaAlum < 0|| notaAlum > 10);
        }
        promedioAlumno = sumaNota / cantParciales;
        sumaPromAlum += promedioAlumno;
        printf("El promedio del alumno es: %0.2f\n", promedioAlumno);
    }
    promedioTotal = sumaPromAlum / cantAlum;
    printf("El promedio total de todos los alumnos es: %0.2f\n", promedioTotal);
    system("pause");
}