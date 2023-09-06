// Leer una nota de un alumno por consola e informar la condición del mismo. (menor
// que 4: Reprobado, menor que 6: Regular, mayor o igual que 6: Promocionado). Validar
// que la nota ingresada se encuentre entre el 0 y el 10, de lo contrario informar “Nota
// inválida”
#include <stdlib.h>
#include <stdio.h>

void main() {
    float nota;
    printf("Ingrese la nota del alumno: ");
    scanf("%f", &nota);
    if (nota < 0 || nota > 10) {
        printf("Nota inválida.\n");
    }
    else if (nota < 4) {
        printf("El alumno reprobo.\n");
    }
    else if (nota < 6) {
        printf("El alumno quedo regular.\n");
    }
    else if (nota >= 6) {
        printf("El alumno promociono la materia.\n");
    }
    system("pause");
}