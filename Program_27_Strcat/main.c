/*-------------------------------------------------*/
/* # Name:    Program_27_Strcat                    */
/* # Purpuse: Programa que muestra la forma        */
/*            correcta concatenar una cadena       */
/*            con otra.                            */
/*                                                 */
/* # Author:  Wilmer Planchez (Mentor Anonymous).  */
/* # Created:     10/10/2012.                      */
/* # Copyright:   (c) Mentor Anonymous 2012.       */
/*-------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// DECLARACION DE VARIABLES GLOBALES

char texto1[40], texto2[40];

main()
{
    printf("Introduce tu nombre: ");
    gets(texto1);
    printf("Introduce tu apellido: ");
    gets(texto2);
    strcat(texto1, " "); /* Añado un espacio al nombre */
    strcat(texto1, texto2); /* Y luego el apellido */
    printf("Te llamas %s\n", texto1);
     printf(" \n");
    system("pause");

}
