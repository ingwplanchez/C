/*-------------------------------------------------*/
/* # Name:    Program_22_Getchar_Putchar           */
/* # Purpuse: Programa que muestra como se utiliza */
/*            Getchar y Putchar                    */
/*                                                 */
/* # Author:  Wilmer Planchez (Mentor Anonymous).  */
/* # Created:     9/10/2012.                       */
/* # Copyright:   (c) Mentor Anonymous 2012.       */
/*-------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

// DECLARACION DE VARIABLES GLOBALES

char letra1, letra2;

main()
{

    printf("Introduce dos letras y pulsa Intro: ");
    letra1 = getchar();
    letra2 = getchar();
    printf("Has tecleado: ");
    putchar(letra1);
    printf(" y también %c", letra2);
    printf(" \n");
    system("pause");
}
