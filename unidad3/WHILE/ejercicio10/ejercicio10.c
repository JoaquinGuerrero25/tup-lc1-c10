#include <stdio.h>
#include <stdlib.h>

void main() {
    float num1, num2;
    int cant_operaciones, opcion;

    cant_operaciones = 0;
    printf("Ingrese el primer numero: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2);

    do{
        printf("\nMenu de Operaciones:\n");
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("5. Cantidad de Operaciones realizadas\n");
        printf("6. Salir\n");
        printf("Seleccione una operacion: ");
        scanf("%d", &opcion);
        switch (opcion){
            case 1:
                printf("Resultado de la suma: %.2f\n", num1 + num2);
                cant_operaciones += 1;
                break;
            case 2:
                printf("Resultado de la resta: %.2f\n", num1 - num2);
                cant_operaciones += 1;
                break;
            case 3:
                printf("Resultado de la multiplicacion: %.2f\n", num1 * num2);
                cant_operaciones += 1;
                break;
            case 4:
                if (num2 != 0)
                {
                    printf("Resultado de la division: %.2f\n", num1 / num2);
                    cant_operaciones += 1;
                }
                else
                {
                    printf("Error: No se puede dividir por cero.\n");
                }
                break;
            case 5:
                printf("La cantidad de opedraciones realizadas son: %i \n", cant_operaciones);
                break;
            default:
                printf("La opcion ingresada es incorrecta. Ingrese una opcion del 1 al 6.\n");
        }
    }while (opcion != 6);

    printf("salio del programa.\n");
    system("pause");
}