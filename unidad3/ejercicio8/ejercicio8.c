// Actualizar el saldo de una cuenta bancaria, a partir de un retiro. Verificar que el saldo
// sea mayor o igual que el importe a retirar.
#include <stdio.h>
#include <stdlib.h>

void main() {
    float saldo, retiro;
    saldo = 1000000;
    printf("Ingrese el saldo a retirar: ");
    scanf("%f", &retiro);
    if (saldo >= retiro){
        printf("Operacion realizada con exito.\n");
    }
    else{
        printf("Saldo insuficiente.\n");
    }
    system("pause");
}