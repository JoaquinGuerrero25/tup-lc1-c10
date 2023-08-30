#include <stdlib.h>
#include <stdio.h>

int main() {
    float  tiempoTrabajado;
    const int valorHora = 800;
    printf("Ingrese el tiempo trabajado (en horas): ");
    scanf("%f", &tiempoTrabajado);
    float sueldo = valorHora * tiempoTrabajado;
    printf("El sueldo calculado es: %.2f\n", sueldo);
    system("pause");
    return 0;
}