// Un empleado de un comercio debe registrar las ventas del día. Para ello, realizar un programa
// que permita ingresar los datos de las ventas realizadas. Primero, requerir al empleado la
// cantidad de ventas que necesita registrar. Luego, para cada venta deberá ingresar el DNI del
// cliente (validar que dicho número no sea menor que 1000000 ni mayor que 99999999).
// Ingresar el monto de la venta y el medio de pago: 1 - Efectivo, 2 - Tarjeta de crédito, si la venta
// fue con tarjeta, pedir que ingrese una opción de las siguientes: 1 - Visa, 2 - American Express, 3
// - Mercado Pago, 4 - Cabal. Además, requerir la cantidad de cuotas en las que abonará (1, 3, 6 o
// 12). El interés por pagar en cuotas será de: 0 interés para efectivo o 1 cuota, 4% para 3 cuotas
// y 8% para 6 y 12 cuotas, por lo se deberá calcular el importe a abonar dependiendo si la venta
// es en efectivo o en cuotas. Validar que todos los datos ingresados por el empleado para una
// venta sean correctos, en caso contrario informar la situación y finalizar la carga de la venta
// actual. Para cada venta, presentar un resumen de la operación, por ejemplo:
// DNI: 38.456.123
// Medio de pago: Tarjeta de crédito
// Tarjeta: Cabal
// Cuotas: 3
// Total: $4784
// Al finalizar el registro, mostrar la suma total de las ventas ingresadas.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int cantVentas, i, Dni, medioPago, opcionTarjeta, cantCuotas;
    float montoVenta, montoFinal, total, montoTotal;
    total = 0;
    montoTotal = 0;

    printf("Ingrese la cantidad de ventas a registrar: ");
    scanf("%i", &cantVentas);

    for (i = 1; i <= cantVentas; i++) {
        printf("Ingrese el DNI del empleado %i: ", i);
        scanf("%i", &Dni);

        if (Dni < 1000000 || Dni > 99999999) {
            printf("El Dni ingresado es incorrecto.\n");
            continue;
        }

        printf("Ingrese el monto de la venta: ");
        scanf("%f", &montoVenta);
        
        printf("Como desea pagar?\n 1- Efectivo\n 2- Tarjeta de credito\n");
        scanf("%i", &medioPago);

        switch (medioPago) {
            case 1:
                total = montoVenta;
                break;
            case 2:
                printf("Ingrese una opcion:\n 1-Visa\n 2-American Express\n 3-Mercado Pago\n 4-Cabal\n ");
                scanf("%i", &opcionTarjeta);
                printf("Ingrese la cantidad de cuotas (1, 3, 6 o 12): ");
                scanf("%i", &cantCuotas);

                if (cantCuotas != 1 && cantCuotas != 3 && cantCuotas != 6 && cantCuotas != 12) {
                    printf("La cantidad de cuotas seleccionada es incorrecta.\n");
                    continue;
                }

                if (cantCuotas == 1) {
                    total = montoVenta;
                } else if (cantCuotas == 3) {
                    total = montoVenta + montoVenta * 0.04;
                } else if (cantCuotas == 6 || cantCuotas == 12) {
                    total = montoVenta + montoVenta * 0.08;
                }

                break;
            default:
                printf("Opción de medio de pago no válida.\n");
                continue; 
        }

        printf("DNI: %d\n", Dni);
        printf("Medio de pago: ");
        if (medioPago == 1) {
            printf("Efectivo\n");
        } else if (medioPago == 2) {
            printf("Tarjeta de crédito\n");
            printf("Tarjeta: ");
            if (opcionTarjeta == 1) {
                printf("Visa\n");
            } else if (opcionTarjeta == 2) {
                printf("American Express\n");
            } else if (opcionTarjeta == 3) {
                printf("Mercado Pago\n");
            } else if (opcionTarjeta == 4) {
                printf("Cabal\n");
            }
            printf("Cuotas: %d\n", cantCuotas);
        }
        printf("Total: $%.2f\n", total);
        montoTotal += total;
    }

    printf("Suma total de las ventas ingresadas: $%.2f\n", montoTotal);

    return 0;
}