/*-------------------------------------------------*/
/* # Name:    Program_10_Numero_Par.               */
/* # Purpuse: Determinar si el numero introducido  */
/*            es par o impar.                      */
/*                                                 */
/* # Author:  Wilmer Planchez (Mentor Anonymous).  */
/* # Created:     7/10/2012.                       */
/* # Copyright:   (c) Mentor Anonymous 2012.       */
/*-------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

// DECLARACION DE VARIABLES GLOBALES

int num, par;

main()
{
    printf("Intruduzca un numero para determinar si es par: ");
    scanf("%d",&num);

    par = num%2;
    if(par == 0){

        printf("El numero %d es par.\n",num);
    }
    else{
        printf("El numero %d es impar.\n",num);
    }
    system("pause");
}
