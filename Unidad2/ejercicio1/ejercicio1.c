#include <stdlib.h>
#include <stdio.h>

int main(){
    int num1, num2;
    printf("Ingrese dos numeros:\n");
    scanf("%i", &num1);
    scanf("%i", &num2);
    int suma = num1 + num2;
    printf("El resultado de las suma es: %i\n", suma);
    system("pause");
    return 0;
}

