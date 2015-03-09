/*-------------------------------------------------*/
/* # Name:    Program_29_Array_Bidimensional       */
/* # Purpuse: Programa que permita introducir      */
/*            10 nombres distintos y que indique   */
/*            si al introducir un nombre este se   */
/*            repite.                              */
/*                                                 */
/* # Author:  Wilmer Planchez (Mentor Anonymous).  */
/* # Created:     11/10/2012.                      */
/* # Copyright:   (c) Mentor Anonymous 2012.       */
/*-------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// DECLARACION DE VARIABLES GLOBALES

char nombres[][40],comparacion[][40];

int i,j,k;

main()
{
    printf("Introduzca 10 nombres distintos: \n");
    for(i=0;i<=9;i++){
        printf("Nombre %d: ", i + 1);
        scanf("%s", nombres[i]);
        strcpy(comparacion[i],nombres[i]);
        j = i - 1 ;
        for(k=0;k<=j;k++){
            if(strcmp(nombres[i],comparacion[k])==0){
               printf("El Nombre ya existe. introduzca uno distinto. \n");
               i = i - 1;
               break;
            } //Fin del If
        } // Fin del For Anidado
    } // Fin del For Principal

    printf(" \n ");
    printf("Los 10 nombres intruducidos son:\n ");
    printf(" \n ");
    for(i=0;i<=9;i++){
        printf("%d) %s \n ",i+1,nombres[i]);
    } // fin del For
    printf(" \n ");
    system("pause");
} // Fin de Main
