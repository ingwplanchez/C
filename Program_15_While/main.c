/*-------------------------------------------------*/
/* # Name:    Program_15_While                     */
/* # Purpuse: Determinar si el numero que tecleamos*/
/*            es positivo o negativo y que se      */
/*            detenga cuando sea 0.                */
/*                                                 */
/* # Author:  Wilmer Planchez (Mentor Anonymous).  */
/* # Created:     7/10/2012.                       */
/* # Copyright:   (c) Mentor Anonymous 2012.       */
/*-------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

// DECLARACION DE VARIABLES GLOBALES

int numero;

main(){

    printf("Teclea un numero (0 para salir): ");
    scanf("%d",&numero);
    while (numero!=0){
        if(numero > 0){
            printf("Es Positivo.\n");
        }
        else{
            printf("Es Negativo.\n");
        }
        printf("Teclea otro numero (0 para salir): ");
        scanf("%d",&numero);
    }
    system("pause");
}
