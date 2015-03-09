/*-------------------------------------------------*/
/* # Name:    Program_19_For                       */
/* # Purpuse: Programa que muestra como se utiliza */
/*            el bucle For                         */
/*                                                 */
/* # Author:  Wilmer Planchez (Mentor Anonymous).  */
/* # Created:     9/10/2012.                       */
/* # Copyright:   (c) Mentor Anonymous 2012.       */
/*-------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

// DECLARACION DE VARIABLES GLOBALES

int contador;

main()
{
    for (contador=0; contador<=100; contador+=5){
        printf("%d ", contador);
        printf(" \n");
        printf(" \n");
    }
    system("pause");
}
