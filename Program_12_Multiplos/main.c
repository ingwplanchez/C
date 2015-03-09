/*-------------------------------------------------*/
/* # Name:    Program_12_Multiplo.                 */
/* # Purpuse: Determinar el primer numero es       */
/*            multiplo del segundo.                */
/*                                                 */
/* # Author:  Wilmer Planchez (Mentor Anonymous).  */
/* # Created:     7/10/2012.                       */
/* # Copyright:   (c) Mentor Anonymous 2012.       */
/*-------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

// DECLARACION DE VARIABLES GLOBALES

int num1, num2, multiplo;

main()
{
    printf("Introduce el Primer numero: ");
    scanf("%d",&num1);
    printf("Introduce el Segundo numero: ");
    scanf("%d",&num2);

    multiplo = num1%num2;
    if(multiplo == 0){

        printf("El numero %d multiplo de %d.\n",num1,num2);
    }
    else{
        printf("El numero %d no es multiplo de %d.\n",num1,num2);
    }
    system("pause");
}
