/*-------------------------------------------------*/
/* # Name:    Program_28_Strcmp                    */
/* # Purpuse: Programa que muestra la forma        */
/*            de comparar una cadena con otra.     */
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
    printf("Introduce una palabra: ");
    gets(texto1);
    printf("Introduce otra palabra: ");
    gets(texto2);
    if (strcmp(texto1, texto2)==0)
        printf("Son iguales\n");
    else
        printf("Son distintas\n");
    system("pause");
}
