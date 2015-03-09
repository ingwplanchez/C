/*-------------------------------------------------*/
/* # Name:    Program_20_For_Anidado               */
/* # Purpuse: Programa que muestra como se utiliza */
/*            el bucle For anidado                 */
/*                                                 */
/* # Author:  Wilmer Planchez (Mentor Anonymous).  */
/* # Created:     9/10/2012.                       */
/* # Copyright:   (c) Mentor Anonymous 2012.       */
/*-------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

// DECLARACION DE VARIABLES GLOBALES

int tabla,numero;

int main()
{
    for (tabla=1; tabla<=5; tabla++){
        for (numero=1; numero<=10; numero++){
            printf("%d x %d = %d\n", tabla, numero, tabla*numero);
            printf("\n");
        }
    }
    system("pause");
}
