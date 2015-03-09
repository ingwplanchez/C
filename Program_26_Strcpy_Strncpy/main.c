/*-------------------------------------------------*/
/* # Name:    Program_26_Strcpy_Strncpy            */
/* # Purpuse: Programa que muestra la forma        */
/*            correcta de asignar el valor de      */
/*            una cadena a otra.                   */
/*                                                 */
/* # Author:  Wilmer Planchez (Mentor Anonymous).  */
/* # Created:     10/10/2012.                      */
/* # Copyright:   (c) Mentor Anonymous 2012.       */
/*-------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// DECLARACION DE VARIABLES GLOBALES

char texto1[40], texto2[40], texto3[10];

main()
{
    printf("Introduce un frase: ");
    gets(texto1);
    strcpy(texto2, texto1);     // strcpy(destino,origen);
                                // strcpy (textoDefinitivo, textoProvisional);
    printf("Una copia de tu texto es %s\n", texto2);
    strncpy(texto3, texto1, 4); // se copiaran solo los primeros Bytes de origen
    printf("Y sus 4 primeras letras son %s\n", texto3);
    printf(" \n");
    system("pause");
}
