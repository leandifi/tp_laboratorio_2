#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int isEmpty;
    int dni;

}EPersona;

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(EPersona lista[], int tam);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(EPersona lista[], int tam, int dni);

/**
 *Agrega una Persona
*/
void agregarPersona (EPersona lista[], int tam);
void inicializarEmpleados(EPersona vec[],int tam);
void bajaPersona(EPersona lista[], int tam);
void mostrar(EPersona[]);
void grafico(EPersona[]);

int buscarLibre(EPersona vec[], int tam);
int buscarPersona(EPersona vec[], int tam, int dni);

//nt contadorEdades(EPersona lista[], int EPersona.edad);



#endif // FUNCIONES_H_INCLUDED
