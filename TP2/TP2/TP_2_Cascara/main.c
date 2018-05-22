#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"


int main()
{
    char seguir='s';
    int menor, joven, adulto, i, mayor, flag=0;
    int opcion;
    EPersona persona[20];
    inicializarEmpleados(persona, 20);
    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                agregarPersona(persona, 20);
                system("pause");
                break;
            case 2:
                bajaPersona(persona, 20);
                system("pause");
                break;
            case 3:
                mostrar(persona);
                //system("pause");
                break;
            case 4:
                grafico(persona);
                //system("pause");
                break;
            case 5:

                seguir = 'n';
                //system("pause");
                break;
        }
        fflush(stdin);
    }


    return 0;
}

