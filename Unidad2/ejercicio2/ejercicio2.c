#include <stdlib.h>
#include <stdio.h>

int main(){
    int num1, num2, num3;
    printf("Ingrese tres numeros:\n");
    scanf("%i", &num1);
    scanf("%i", &num2);
    scanf("%i", &num3);
    int suma = num1 + num2 + num3;
    printf("El resultado de las suma es: %i\n", suma);
    system("pause");
    return 0;
}