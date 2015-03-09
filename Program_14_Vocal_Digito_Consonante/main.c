/*-------------------------------------------------*/
/* # Name:    Program_14_Vocal_Digito_Consonante.  */
/* # Purpuse: Leer un caracter intruducido por     */
/*            teclado y determinar si es una       */
/*            Vocal, un digito o una consonante    */
/*                                                 */
/* # Author:  Wilmer Planchez (Mentor Anonymous).  */
/* # Created:     7/10/2012.                       */
/* # Copyright:   (c) Mentor Anonymous 2012.       */
/*-------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

// DECLARACION DE VARIABLES GLOBALES

char caracter;

main(){

printf("Intruduce un caracter: ");
scanf("%c",&caracter);

    switch(caracter){
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
        case'a':
        case'e':
        case'i':
        case'o':
        case'u':
        case'A':
        case'E':
        case'I':
        case'O':
        case'U':
        printf("Vocal.\n");
        break;
        default:
        printf("Consonante o simbolo.\n");
    }
    system("pause");
}
