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
    printf("Ingrese el primer número: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%f", &num2);
    printf("\nMenú de Operaciones:\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("5. Salir\n");
    printf("Seleccione una operación: ");
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
            printf("Resultado de la multiplicación: %.2f\n", num1 * num2);
            break;
        case 4:
            if (num2 != 0) {
                printf("Resultado de la división: %.2f\n", num1 / num2);
            } 
            else {
                printf("Error: No se puede dividir por cero.\n");
            }
        case 5:
            printf("Saliendo del programa. ¡Adiós!\n");
            break;
    default:
        printf("Opción no válida. Por favor, seleccione una opción válida del menú.\n");
        break;
    }
    system("pause");
}