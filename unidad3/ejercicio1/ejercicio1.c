// Ingresar por teclado dos números, determinar cuál es el mayor y visualizarlo en pantalla.
#include <stdlib.h>
#include <stdio.h>

int main () {
    int num1, num2;
    printf("Ingrese dos numeros: \n");
    scanf("%i", &num1);
    scanf("%i", &num2);
    if(num1 > num2) {
        printf("El mayor de los numeros ingresados es %i\n", num1);
    }
    else if (num1 == num2 ) {
        printf("Los numeros ingresados son iguales(%i = %i)\n", num1 , num2);
    }
    else{
        printf("El mayor de los numeros ingresados es %i\n", num2);
    }
    system("pause");
    return 0;
}