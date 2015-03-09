/*-------------------------------------------------*/
/* # Name:    Program_21_For_Letras                */
/* # Purpuse: Programa que muestra como se utiliza */
/*            el bucle For para contar letras      */
/*                                                 */
/* # Author:  Wilmer Planchez (Mentor Anonymous).  */
/* # Created:     9/10/2012.                       */
/* # Copyright:   (c) Mentor Anonymous 2012.       */
/*-------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

// DECLARACION DE VARIABLES GLOBALES

char letra;

main()
{

    for (letra = 97; letra<=122; letra++){  // valores asignados de acuerdo al codigo
                                            // ASCII donde:  a = 97, z =122.
        printf("%c ", letra);
    }
    printf("\n");
    system("pause");
}
