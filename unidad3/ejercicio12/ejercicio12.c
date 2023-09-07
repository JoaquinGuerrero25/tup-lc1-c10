// Realizar un programa que permita registrar los datos para una venta de $4600. Para
// ello, se le pedirá al usuario que ingrese su DNI, validar que dicho número no sea menor
// que 1000000 ni mayor que 99999999. Luego, requerir al usuario que seleccione el
// medio de pago: 1-Efectivo, 2-Tarjeta de crédito, si selecciona tarjeta, pedir que ingrese
// una opción de las siguientes: 1-Visa, 2-American Express, 3-Mercado Pago, 4-Cabal.
// Además, requerir la cantidad de cuotas en las que abonará (1, 3, 6 o 12). El interés por
// pagar en cuotas será de: 0 interés para efectivo o 1 cuota, 4% para 3 cuotas y 8% para
// 6 y 12 cuotas. Validar que todos los datos ingresados por el usuario sean correctos, en
// caso contrario informar la situación y finalizar programa. Por último, presentar un
// resumen de la operación, por ejemplo:
// DNI: 38.456.123
// Medio de pago: Tarjeta de crédito
// Tarjeta: Cabal
// Cuotas: 3
// Total: $4784
#include <stdio.h>
#include <stdlib.h>

void main() {
    int valorVenta, Dni, opcionPago, opcionTarjeta, cantCuotas;
    float total;
    valorVenta = 4600;
    printf("Ingrese su DNI: ");
    scanf("%i", &Dni);
    if (Dni < 1000000 || Dni > 99999999) {
        printf("Ingreso un numero de dni incorrecto.\n");
    }
    else {
        printf("Como desea pagar?\n 1- Efectivo\n 2- Tarjata de credito\n");
        scanf("%i", &opcionPago);

        switch (opcionPago){

            case 1:
                total = 4600;
                break;

            case 2:

                printf("Ingrese una opcion:\n 1-Visa\n 2-American Express\n 3-Mercado Pago\n 4-Cabal\n ");
                scanf("%i", &opcionTarjeta);

                printf("Ingrese la cantidad de cuotas (1, 3, 6 o 12): ");
                scanf("%i", &cantCuotas);

                if (cantCuotas == 1) {
                    total = 4600;
                } 
                else if (cantCuotas == 3) {
                    total = 4600 + 4600 * 0.04;
                } 
                else if (cantCuotas == 6 || cantCuotas == 12) {
                    total = 4600 + 4600 * 0.08;
                } 
                else {
                    printf("Cantidad de cuotas no válida. Debe ser 1, 3, 6 o 12.\n");
                }
                break;

            default:
                printf("Opción de medio de pago no válida.\n");
        }

                                                                                // TERMINAR

    }
}