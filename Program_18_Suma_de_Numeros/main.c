/*-------------------------------------------------*/
/* # Name:    Program_18_Suma_de_Numeros           */
/* # Purpuse: Programa que pida al usuario numeros */
/*            positivos y vaya calculando la suma  */
/*            de ellos. Termina cuando se teclee   */
/*            un numero negativo o cero.           */
/*                                                 */
/* # Author:  Wilmer Planchez (Mentor Anonymous).  */
/* # Created:     9/10/2012.                       */
/* # Copyright:   (c) Mentor Anonymous 2012.       */
/*-------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

// DECLARACION DE VARIABLES GLOBALES

int numero,suma;

main()
{
    do{
        printf("Introduzca un numero: ");
        scanf("%d",&numero);
        suma = suma + numero;
        printf("La Suma es %d\n", suma);

    }while(!(numero<=0));
    printf("Fin del Programa\n");
    system("pause");
}
