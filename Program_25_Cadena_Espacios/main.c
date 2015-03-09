/*-------------------------------------------------*/
/* # Name:    Program_25_Cadena_Espacios           */
/* # Purpuse: Programa que muestra un nombre       */
/*            intruducido por el usuario separando */
/*            las letras del nombre con espacios   */
/*                                                 */
/* # Author:  Wilmer Planchez (Mentor Anonymous).  */
/* # Created:     10/10/2012.                      */
/* # Copyright:   (c) Mentor Anonymous 2012.       */
/*-------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

// DECLARACION DE VARIABLES GLOBALES
char Array[31]; // Se Podran guardar 30 letras o caracteres
int i;
main()
{
    printf("Introduzca un nombre: ");
    scanf("%s",&Array);

    for(i=0; i<=30; i++){
        if(Array[i]== '\0'){
            printf(" \n");
            printf("Fin en la posicion %d del Array.\n",i);
            break;
        } // Fin del If
        printf("%c ", Array[i]);
    } // Fin del For
    printf(" \n");
    system("pause");
}
