/*-------------------------------------------------*/
/* # Name:    Program_11_Numero_Mayor.             */
/* # Purpuse: Determinar el mayor de dos numeros   */
/*                                                 */
/* # Author:  Wilmer Planchez (Mentor Anonymous).  */
/* # Created:     7/10/2012.                       */
/* # Copyright:   (c) Mentor Anonymous 2012.       */
/*-------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

// DECLARACION DE VARIABLES GLOBALES

int num1,num2;

main()
{
    printf("Introduce el Primer numero: ");
    scanf("%d",&num1);
    printf("Introduce el Segundo numero: ");
    scanf("%d",&num2);

    if(num1 > num2){
        printf("El numero %d, es mayor\n",num1);}
    else if(num1 == num2){
        printf("Los numeros son iguales.\n");}
    else{
        printf("El numero %d, es mayor\n",num2);}
    system("pause");
}
