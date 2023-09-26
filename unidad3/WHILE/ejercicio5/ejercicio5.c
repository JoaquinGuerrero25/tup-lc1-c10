#include <stdio.h>
#include <stdlib.h>

void main() {
    int dni = 38632584;
    float nota = 7;

    int dniIngresado = 0;
    int intentos = 0;
    int ingresaCorrectamente = 0;

    do {
        printf("Ingrese el DNI del alumno: ");
        scanf("%d", &dniIngresado);

        if (dni != dniIngresado) {
            printf("El dni ingresado es incorrecto. Intento %d de 3\n", 1 + intentos);
            intentos++;
        } else {
            printf("La nota del alumno es: %.2f\n", nota);
            break;
        }
        if(intentos == 3){
            printf("Has agotado tus intentos. El programa se cierra.\n");
            break;
        }
    } while (intentos <= 3);
    system("pause");
}
