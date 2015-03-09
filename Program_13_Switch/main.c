/*-------------------------------------------------*/
/* # Name:    Program_13_Switch.                   */
/* # Purpuse: uso de la estructuta Switch.         */
/*                                                 */
/* # Author:  Wilmer Planchez (Mentor Anonymous).  */
/* # Created:     7/10/2012.                       */
/* # Copyright:   (c) Mentor Anonymous 2012.       */
/*-------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

// DECLARACION DE VARIABLES GLOBALES

char tecla;


int main()
{
    printf("Pulse una tecla y luego intro: ");
    scanf("%c",&tecla);
    switch (tecla){
        case ' ':
        printf("Espacio.\n");
        break;
        case'0':
        case'1':
        case'2':
        case'3':
        case'4':
        case'5':
        case'6':
        case'7':
        case'8':
        case'9':
        printf("Digito.\n");
        break;
        default:
        printf("Ni espacio ni digito.\n");
    }
    system("pause");
}
