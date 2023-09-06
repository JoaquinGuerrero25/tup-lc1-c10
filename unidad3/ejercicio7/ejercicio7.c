// Ingresar el valor de una venta y aplicar el 15% de descuento si el valor es >= 100000 y
// un 10% si es menor. Validar que la venta sea mayor que 0, caso contrario informar
// dicha situación
#include <stdlib.h>
#include <stdio.h>

int main () {
    float valorVenta, descuento, resultado;
    printf("Ingrese el monto de la venta: ");
    scanf("%f", &valorVenta);

    if (valorVenta <= 0) {
        printf("El monto ingresado es incorrecto.\n");
    }
    else if (valorVenta >= 100000) {
        descuento = valorVenta * 0.15;
        resultado = valorVenta - descuento;
        printf("Obtienes un descuento del 15%%\nEl valor actualizado sería: %.2f\n", resultado);
    }
    else {
        descuento = valorVenta * 0.10;
        resultado = valorVenta - descuento;
        printf("Obtienes un descuento del 10%%\nEl valor actualizado sería: %.2f\n", resultado);
    }
    
    system("pause");
    return 0;
}