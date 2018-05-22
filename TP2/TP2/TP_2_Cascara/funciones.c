#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"


int buscarLibre(EPersona vec[], int tam)
{
   int indice=-1;
   for(int i=0;i<tam;i++)
    {
        if(vec[i].isEmpty==1)
            {
               indice=i;
                break;
            }

    }
     return indice;
}

int buscarPorDni(EPersona vec[], int tam, int dni)
{
    int indice=-1;
    for(int i=0;i<tam;i++)
        {
            if(vec[i].dni == dni && vec[i].isEmpty==0)
                {
             indice=i;
                }
        }
         return indice;
}

void agregarPersona(EPersona lista[], int tam)
{
    EPersona nuevapersona;
    int dni, indice, existe;
    indice=buscarLibre(lista, 20);
    if(existe==-1)
        {
            printf("Ya existe.");
        }
    else
    {
        printf("Ingrese un dni: ");
        scanf("%d",&dni);
        existe= buscarPorDni(lista, 20, dni);
    }
    if(existe!=-1)
    {
        printf("El dni corresponde a una persona ya cargada.\n\n");
    }
    else
    {
        printf("Ingrese un nombre:");
        scanf("%s", &nuevapersona.nombre);
        fflush(stdin);

        printf("Ingrese edad:");
        fflush(stdin);
        scanf("%d", &nuevapersona.edad);

        nuevapersona.dni=dni;
        nuevapersona.isEmpty=0;

        lista[indice]=nuevapersona;
        printf("\nPersona cargada.\n\n");
    }

}
/*void borrarPersona(EPersona vec[], int tam)
{

    int i, dniIngresado;
    for(i=0; i<tam; i++)
    {
        if(vec[i].dni==dniIngresado)
            {
                vec[i].isEmpty==1;
            }

    }
}*/
void mostrar(EPersona persona[])
{
    EPersona auxPersona;
    int i,a;

    for(i=0; i<19; i++)
    {
        for(a=i+1; a<20; a++)
        {
            if(strcmp(persona[i].nombre,persona[a].nombre)>0)
            {
                auxPersona=persona[a];
                persona[a]=persona[i];
                persona[i]=auxPersona;
            }
        }
    }
    for(i=0; i<20; i++)
    {
        if(persona[i].isEmpty==1)
        {
            printf("Nombre: %s, dni: %d, edad: %d\n",persona[i].nombre,persona[i].dni,persona[i].edad);
        }
    }
}
void grafico(EPersona persona[])
{
    int i,menor=0,joven=0,adulto=0,total;
    for(i=0; i<20; i++)
    {
        if(persona[i].isEmpty==1)
        {
            if(persona[i].edad<18)
            {
                menor++;
            }
            else
            {
                if(persona[i].edad>=18 && persona[i].edad<=35)
                {
                    joven++;
                }
                else
                {
                    adulto++;
                }
            }
        }
    }
    total=joven+adulto+menor;
    for(i=total; i>0; i--)
    {
        printf(" ");
        if(menor==i)
        {
            printf("*");
            menor--;
        }
        printf("\t  ");
        if(joven==i)
        {
            printf("*");
            joven--;
        }
        printf("\t ");
        if(adulto==i)
        {
            printf("*");
            adulto--;
        }
        printf("\n");
        if(menor==0 && joven==0 && adulto==0)
        {
            break;
        }
    }
    printf("<18\t19-35\t>35\n");
}
void inicializarEmpleados(EPersona vec[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
        {
                    vec[i].isEmpty=1;

        }
}
void bajaPersona(EPersona vec[], int tam){
int dni;
int esta;
char confirma;

system("cls");
printf("---Baja Persona---\n\n");

   printf("Ingrese dni: ");
        scanf("%d", &dni);

        esta = buscarPorDni(vec, tam, dni);

        if(esta == -1)
        {
            printf("\nEl dni %d no se encuentra en el sistema\n\n", dni);

        }
        else{

               //mostrar(vec[]);

        printf("\nConfirma baja?: ");
        fflush(stdin);
        scanf("%c", &confirma);

        if(confirma == 's'){
            vec[esta].isEmpty = 1;
            printf("\nSe ha realizado la baja\n\n");
        }
        else{
            printf("\nSe ha cancelado la baja\n\n");
        }

        }
}
