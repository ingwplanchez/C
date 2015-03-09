/*-------------------------------------------------*/
/* # Name:    Program_07_Numeros_Reales.           */
/* # Purpuse: Mostrar como se representan los      */
/*            numeros reales limitando la cantidad */
/*            de cifras significativas.            */
/*                                                 */
/* # Author:  Wilmer Planchez (Mentor Anonymous).  */
/* # Created:     6/10/2012.                       */
/* # Copyright:   (c) Mentor Anonymous 2012.       */
/*-------------------------------------------------*/


// DECLARACION DE VARIABLES GLOBALES

float x = 150.53333;

#include <stdio.h>
#include <stdlib.h>

main()
{
    printf("El valor de x es %f\n", x);
    printf("El valor de x con solo 2 decimales %5.2f\n", x);
    printf("El valor de x con un solo decimal  %5.1f\n", x);
    printf("El valor de x con 7 cifras enteras %7.1f\n", x);
    printf("El valor de x alineado a la izquierda %-7.1f\n", x);
    printf("El valor de x sin decimales %3.0f.\n", x);
    printf("El valor de x solo con una cifa entera %1.0f\n", x);
    system("pause");
}
