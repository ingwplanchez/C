/*-------------------------------------------------*/
/* # Name:    Program_06_Formato.                  */
/* # Purpuse: Mostrar Los diferentes tipos de      */
/*            formato de numeros  enteros.         */
/*                                                 */
/* # Author:  Wilmer Planchez (Mentor Anonymous).  */
/* # Created:     6/10/2012.                       */
/* # Copyright:   (c) Mentor Anonymous 2012.       */
/*-------------------------------------------------*/


// DECLARACION DE VARIABLES GLOBALES

int num1 = 15, num2 = 015, num3 = 0x15;
char variable = 'ca';


#include <stdio.h>      // Indica que queremos funciones de entrada salida
#include <stdlib.h>     // indica que deseamos usar algunas funciones predefinidas

main()
{
    printf("El Primer numero es %d, ", num1);
    printf("El Segundo numero es %d, ", num2);
    printf("El Tercer numero es %d.\n", num3);
    printf("La cadena es %c.", variable);
    system("pause");

}
