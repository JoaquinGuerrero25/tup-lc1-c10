// - Pedir al usuario que ingrese dos números (permitir ingresar número con decimales).
// Luego presentar el siguiente menú:
// 1. Informar su suma
// 2. Informar su resta
// 3. Informar su multiplicación
// 4. Informar su división
// 5. Salir
// Seleccione una operación:
// Mostrar el resultado de la operación seleccionada. Si el usuario ingresa la opción 5 el
// programa debe terminar.
#include <stdio.h>
#include <stdlib.h>

void main() {
    float num1, num2;
    int opcion;
    printf("Ingrese el primer numero: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2);
    printf("\nMenu de Operaciones:\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("5. Salir\n");
    printf("Seleccione una operacion: ");
    scanf("%d", &opcion);
    switch (opcion)
    {
        case 1:
            printf("Resultado de la suma: %.2f\n", num1 + num2);
            break;
        case 2:
            printf("Resultado de la resta: %.2f\n", num1 - num2);
             break;
        case 3:
            printf("Resultado de la multiplicacion: %.2f\n", num1 * num2);
            break;
        case 4:
            if (num2 != 0) {
                printf("Resultado de la division: %.2f\n", num1 / num2);
            } 
            else {
                printf("Error: No se puede dividir por cero.\n");
            }
        case 5:
            printf("Saliendo del programa. ¡Adios!\n");
            break;
    default:
        printf("Opcion no válida. Por favor, seleccione una opcion válida del menu.\n");
        break;
    }
    system("pause");
}