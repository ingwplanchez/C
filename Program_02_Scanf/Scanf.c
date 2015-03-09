
/*-------------------------------------------------*/
/* # Name:    Program_02_Scanf.                    */
/* # Purpuse: Pedir al usuario ingresar 2 numeros  */
/*            enteros para  luego realizar la suma.*/
/*                                                 */
/* # Author:  Wilmer Planchez (Mentor Anonymous).  */
/* # Created:     6/10/2012.                       */
/* # Copyright:   (c) Mentor Anonymous 2012.       */
/*-------------------------------------------------*/

#include <stdio.h>      // Indica que queremos funciones de entrada salida
#include <stdlib.h>     // indica que deseamos usar algunas funciones predefinidas

// DECLARACION DE VARIABLES GLOBALES

int num1, num2, suma;

main()
{
    printf("Introduce el Primer numero: ");
    scanf("%d", &num1);
    printf("Introduce el Segundo numero: ");
    scanf("%d", &num2);
    suma = num1 + num2;
    printf("La suma es %d \n", suma);
    system("pause");
 }
