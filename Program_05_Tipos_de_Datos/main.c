/*-------------------------------------------------*/
/* # Name:    Program_05_Tipos_de_Datos.           */
/* # Purpuse: Mostrar Los diferentes tipos de datos*/
/*            enteros.                             */
/*                                                 */
/* # Author:  Wilmer Planchez (Mentor Anonymous).  */
/* # Created:     6/10/2012.                       */
/* # Copyright:   (c) Mentor Anonymous 2012.       */
/*-------------------------------------------------*/


// DECLARACION DE VARIABLES GLOBALES

    int num1 = -1;
    signed int num2 = -2;
    unsigned num3 = 3;

#include <stdio.h>      // Indica que queremos funciones de entrada salida
#include <stdlib.h>     // indica que deseamos usar algunas funciones predefinidas

main()
{
    printf("El Primer numero es %d, ", num1);
    printf("El Segundo numero es %d, ", num2);
    printf("El Tercer numero es %d.\n", num3);
    system("pause");
}
