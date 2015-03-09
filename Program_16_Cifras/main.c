/*-------------------------------------------------*/
/* # Name:    Program_16_Cifras.                   */
/* # Purpuse: Determinar la cantidad de cifras que */
/*            posee un numero introducido por      */
/*            teclado.                             */
/*                                                 */
/* # Author:  Wilmer Planchez (Mentor Anonymous).  */
/* # Created:     8/10/2012.                       */
/* # Copyright:   (c) Mentor Anonymous 2012.       */
/*-------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

// DECLARACION DE VARIABLES GLOBALES

int numero,cifras,n;

main()
{
    printf("Introduce un numero de varias cifras: ");
    scanf("%d",&numero);
    n = numero; // n toma elvalor de la variable numero
    while(numero >= 1){
        numero = numero / 10;
        cifras++;
    }
    printf("El numero de cifras de %d es %d\n",n,cifras);
    printf("Fin del programa.\n");
    system("pause");
}
