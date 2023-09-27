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

void main()
{
    int cantVentas = 0;
    int dniCliente = 0;
    int metodoPago = 0;
    int cantCuotas = 0;
    int opcionTarjeta = 0;
    float montoVenta = 0;
    float montoFinalVenta = 0;
    float montoTotalTodasLasVentas = 0;

    do
    {
        printf("Ingrese la cantidad de ventas a registrar: ");
        scanf("%i", &cantVentas);
        if (cantVentas < 1)
        {
            printf("La cantidad de ventas a registrar debe ser igual o mayor a 1.\n");
        }
    } while (cantVentas < 1);

    for (int i = 1; i <= cantVentas; i++)
    {
        do
        {
            printf("Ingrese el DNI del cliente %i: ", i);
            scanf("%i", &dniCliente);
            if (dniCliente < 1000000 || dniCliente > 99999999)
            {
                printf("El DNI ingresado es incorrecto.\n");
            }
        } while (dniCliente < 1000000 || dniCliente > 99999999);

        do
        {
            printf("Ingresa el monto de la venta: ");
            scanf("%f", &montoVenta);
            if (montoVenta < 1)
            {
                printf("El monto ingresado es incorrecto.\n");
            }
        } while (montoVenta < 1);

        do
        {
            printf("Metodo de pago:\n1- Efectivo\n2- Tarjeta de credito\n");
            printf("Ingrese el metodo de pago: ");
            scanf("%i", &metodoPago);
            if (metodoPago != 1 && metodoPago != 2)
            {
                printf("El metodo ingresado es incorrecto.\n");
            }
        } while (metodoPago != 1 && metodoPago != 2);

        switch (metodoPago)
        {
        case 1:
            montoFinalVenta = montoVenta;
            break;
        case 2:
            printf("Opcion de tarjetas\n1- Visa\n2- American Express\n3- Mercado Pago\n4- Cabal\n");
            printf("Ingrese la opcion con la que desea pagar: ");
            scanf("%i", &opcionTarjeta);
            while (opcionTarjeta < 1 || opcionTarjeta > 4)
            {
                printf("La opcion ingresada es incorrecta.\nPor favor vuelva a ingresar una opcion de 1 a 4: ");
                scanf("%i", &opcionTarjeta);
            }

            do
            {
                printf("Ingrese la cantidad de cuotas(1, 3, 6, 12): ");
                scanf("%i", &cantCuotas);
                if (cantCuotas != 1 && cantCuotas != 3 && cantCuotas != 6 && cantCuotas != 12)
                {
                    printf("La cantidad de cuotas seleccionadas es incorrecta.\n");
                }
            } while (cantCuotas != 1 && cantCuotas != 3 && cantCuotas != 6 && cantCuotas != 12);

            switch (cantCuotas)
            {
            case 1:
                montoFinalVenta = montoVenta;
                break;
            case 3:
                montoFinalVenta = montoVenta + (montoVenta * 0.4);
                break;
            default:
                montoFinalVenta = montoVenta + (montoVenta * 0.8);
                break;
            }
        default:
            break;
        }

        printf("Resumen venta\n");
        printf("DNI: %i\n", dniCliente);
        if (metodoPago == 1)
        {
            printf("Metodo de pago: Efectivo\n");
        }
        else
        {
            printf("Metodo de pago: Tarjeta de credito\n");
        }
        if (opcionTarjeta == 1)
        {
            printf("Tarjeta: Visa\n");
        }
        else if (opcionTarjeta == 2)
        {
            printf("Tarjeta: American Express\n");
        }
        else if (opcionTarjeta == 2)
        {
            printf("Tarjeta: Mercado Pago\n");
        }
        else if (opcionTarjeta == 2)
        {
            printf("Tarjeta: Cabal\n");
        }
        printf("Cuotas: %i\n", cantCuotas);
        printf("Total: %f\n", montoFinalVenta);
        montoTotalTodasLasVentas += montoFinalVenta;
    }
    printf("El monto total de todas las ventas es: %i\n", montoTotalTodasLasVentas);
}