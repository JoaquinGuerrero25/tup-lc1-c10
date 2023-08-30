#include <stdlib.h>
#include <stdio.h>

int main() {
    float valorHora, tiempoTrabajado;
    printf("Ingrese el valor de la hora de trabajo: ");
    scanf("%f", &valorHora);
    printf("Ingrese el tiempo trabajado (en horas): ");
    scanf("%f", &tiempoTrabajado);
    float sueldo = valorHora * tiempoTrabajado;
    printf("El sueldo calculado es: %2f\n", sueldo);
    system("pause");
    return 0;
}