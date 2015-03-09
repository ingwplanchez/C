/*-------------------------------------------------*/
/* # Name:    Program_09_Tipo.                     */
/* # Purpuse: Cambiar el tipo de dato de una       */
/*            Operacion.                           */
/*                                                 */
/* # Author:  Wilmer Planchez (Mentor Anonymous).  */
/* # Created:     6/10/2012.                       */
/* # Copyright:   (c) Mentor Anonymous 2012.       */
/*-------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

// DECLARACION DE VARIABLES GLOBALES

int num1 = 5, num2 = 2;
float division1, division2;

main()
{
    printf("Mis numeros son %d y %d\n",num1,num2);
    division1 = num1 / num2;
    printf("Su division es %f\n",division1);
    division2 = (float)num1 / (float)num2;
    printf("Convirtiendo los numero a flotaes el resultado es %f\n",division2);
    system("pause");
}
