/*-------------------------------------------------*/
/* # Name:    Program_08_Sizeof.                   */
/* # Purpuse: Mostrar eltamaño que ocupa una       */
/*            variable o tipo de dato.             */
/*                                                 */
/* # Author:  Wilmer Planchez (Mentor Anonymous).  */
/* # Created:     6/10/2012.                       */
/* # Copyright:   (c) Mentor Anonymous 2012.       */
/*-------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

// DECLARACION DE VARIABLES GLOBALES

float numero;
short int i;

main()
{
    printf("El tamaño de mi variable float es %d\n", sizeof numero);
    printf("El valor normal para una variable float es %d\n",sizeof(float));
    printf("Un entero corto ocupa %d\n", sizeof i);
    system("pause");
}
