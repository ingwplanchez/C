/*-------------------------------------------------*/
/* # Name:    Program_17_Do_While.                 */
/* # Purpuse: Ejemplo sencillo del funcionamiento  */
/*            de la estructura Do While.           */
/*                                                 */
/* # Author:  Wilmer Planchez (Mentor Anonymous).  */
/* # Created:     8/10/2012.                       */
/* # Copyright:   (c) Mentor Anonymous 2012.       */
/*-------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

// DECLARACION DE VARIABLES GLOBALES


int clave,valida = 911;

main()

{
    do{
        printf("Intruduzca su clave numerica: ");
        scanf("%d",&clave);
        if(clave != valida){
            printf("NO es valida\n");
        }
    } while(clave!= valida);
    printf("Clave Aceptada. \n");
    system("pause");
}
