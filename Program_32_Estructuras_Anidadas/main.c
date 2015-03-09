/*-------------------------------------------------*/
/* # Name:    Program_32_Estructuras_Anidadas      */
/* # Purpuse: Programa que muestra como se utiliza */
/*            una estructura de datos anidada.     */
/*                                                 */
/* # Author:  Wilmer Planchez (Mentor Anonymous).  */
/* # Created:     11/10/2012.                      */
/* # Copyright:   (c) Mentor Anonymous 2012.       */
/*-------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

struct fechaNacimiento{

int dia;
int mes;
int anyo;
};

struct
{
char inicial;
struct fechaNacimiento Fecha;
float nota;
} persona;

main()
{
    persona.inicial = 'I';
    persona.Fecha.mes = 8;
    persona.nota = 7.5;
    printf("La nota es %f", persona.nota);
}

