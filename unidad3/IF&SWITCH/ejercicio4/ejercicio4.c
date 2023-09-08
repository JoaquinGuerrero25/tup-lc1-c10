// Ingresar por teclado tres números, determinar cuál es el mayor y visualizarlo en
// pantalla.

#include <stdio.h>
#include <stdlib.h>

int main () {
    int num1, num2, num3;
    printf("Ingresa un numero entero: ");
    scanf("%i", &num1);
    printf("Ingresa un segundo numero entero: ");
    scanf("%i", &num2);
    printf("Ingresa un tercer numero entero: ");
    scanf("%i", &num3);
    if (num1 > num2 && num1 > num3){
        printf("El numero mayor de los ingresados es: %i\n", num1);
    }
    else if (num2 > num1 && num2 > num3){
        printf("El numero mayor de los ingresados es: %i\n", num2);
    }
    else{
        printf("El numero mayor de los ingresados es: %i\n", num3);
    }
    system("pause");
    return 0;
}