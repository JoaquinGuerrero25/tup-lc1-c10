#include <stdlib.h>
#include <stdio.h>

int main(){
    int num1, num2;
    printf("Ingrese dos numeros:\n");
    scanf("%i", &num1);
    scanf("%i", &num2);
    int suma = num1 + num2;
    int producto = num1 * num2;
    int resta = num1 - num2;
    printf("la suma es: %i ", suma, "\n el producto es: %i", producto, "\n la resta es: %i", resta);
    system("pause");
    return 0;
}