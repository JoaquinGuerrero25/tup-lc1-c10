// La compañía que gestiona la autopista ha decidido cambiar las tarifas de peaje. Estas tarifas
// dependen de:
// ● Tipo de vehículo (camión, automóvil o moto) que desee utilizar la autopista
// ● Número de pasajeros que lleve
// ● Tipo horario del día:
// Horario A: horas de “Alta” congestión:
// ● Los automóviles con tres pasajeros o más no pagan peaje
// ● Los camiones pagan $300
// ● Las motos pagan $100
// Horario B: horas de “Baja” congestión:
// ● Los automóviles pagan $150
// ● Los camiones pagan $200
// ● Las motos no pagan peaje
// En este horario la tarifa es independientemente del número de pasajeros.
// Escriba un programa que leyendo el tipo de vehículo, tipo de horario de congestión alta o baja
// y el número de pasajeros, calcule la tarifa que le debe cobrar a un vehículo. Validar que el tipo
// de vehículo sea uno de los mencionados y que el número de pasajeros no sea mayor a 5.

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int cantPasajeros = 0;
    int tipoVehiculo = 0;
    char tipoHorario;
    float peaje = 0;

    printf("Tipos de vehiculos:\n");
    printf("1- camion\n2- automovil\n3- moto\n");
    printf("Ingrese el tipo de vehiculo: ");
    scanf("%i", &tipoVehiculo);
    while (tipoVehiculo < 1 || tipoVehiculo > 3)
    {
        printf("El tipo de vehiculo ingresado es incorrecto. Ingrese una opcion del 1 al 3: ");
        scanf("%i", &tipoVehiculo);
    }

    if (tipoVehiculo == 1 || tipoVehiculo == 2)
    {
        printf("Ingrese el numero de pasajeros: ");
        scanf("%i", &cantPasajeros);
        while (cantPasajeros < 1 || cantPasajeros > 5)
        {
            printf("La cantidad de pasajeros no puede ser menor a 1 o mayor a 5.\nIngrese la cantidad de pasajeros correcta: ");
            scanf("%i", &cantPasajeros);
        }
    }
    else
    {
        printf("Ingrese el numero de pasajeros: ");
        scanf("%i", &cantPasajeros);
        while (cantPasajeros < 1 || cantPasajeros > 2)
        {
            printf("La cantidad de pasajeros no puede ser menor a 1 o mayor a 2.\nIngrese la cantidad de pasajeros correcta: ");
            scanf("%i", &cantPasajeros);
        }
    }

    getchar();
    printf("Ingrese el tipo de horario(A o B): ");
    scanf("%c", &tipoHorario);
    while (tipoHorario != 'A' && tipoHorario != 'a'&& tipoHorario != 'B' && tipoHorario != 'b')
    {
        printf("El tipo de horario es incorrecto.\nDebe ingresar 'A' para horario de alta congestion o 'B' para horario de baja congestion.\nIngrese el tipo de horario correcto: ");
        scanf("%c", &tipoHorario);
    }
    printf("Ticket:\n");
    if (tipoHorario == 'A' || tipoHorario == 'a')
    {
        if (tipoVehiculo == 1)
        {
            printf("camion\n");
            peaje = 300;
        }
        else if (tipoVehiculo == 2)
        {
            printf("Atumovil\n");
            if (cantPasajeros > 3)
            {
                peaje = 0;
            }
            else
            {
                peaje = 200;
            }
        }
        else if (tipoVehiculo == 3)
        {
            printf("moto\n");
            peaje = 100;
        }
        printf("El precio del peaje es: %0.0f", peaje);
    }
    else
    {
        if (tipoVehiculo == 1)
        {
            printf("camion\n");
            peaje = 200;
        }
        else if (tipoVehiculo == 2)
        {
            printf("automovil\n");
            peaje = 150;
        }
        else if (tipoVehiculo == 3)
        {
            printf("moto\n");
            peaje = 0;
        }
        printf("El precio del peaje es: %0.0f", peaje);
    }
    system("pause");
}
