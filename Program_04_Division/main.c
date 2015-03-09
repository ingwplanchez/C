/*-------------------------------------------------*/
/* # Name:    Program_04_Division.                 */
/* # Purpuse: Pedir al usuario ingresar 2 numeros  */
/*            enteros para  luego calcular su      */
/*            division .                           */
/*                                                 */
/* # Author:  Wilmer Planchez (Mentor Anonymous).  */
/* # Created:     6/10/2012.                       */
/* # Copyright:   (c) Mentor Anonymous 2012.       */
/*-------------------------------------------------*/

#include <stdio.h>      // Indica que queremos funciones de entrada salida
#include <stdlib.h>     // indica que deseamos usar algunas funciones predefinidas

// DECLARACION DE VARIABLES GLOBALES

int num1, num2, resto;
float division;

main()
{
    printf("Introduce el Primer numero: ");
    scanf("%d", &num1);
    printf("Introduce el Segundo numero: ");
    scanf("%d", &num2);
    division = (float)num1 /(float)num2;
    resto = num1%num2;
    printf("El resultado de la division es, %7.2f \n",division);
    printf("El residuo de la division es, %d \n",resto);
    system("pause");
}
