/*-------------------------------------------------*/
/* # Name:    Program_23_Getchar_Arrays            */
/* # Purpuse: Programa que muestra como se utiliza */
/*            Un Array.                            */
/*                                                 */
/* # Author:  Wilmer Planchez (Mentor Anonymous).  */
/* # Created:     10/10/2012.                      */
/* # Copyright:   (c) Mentor Anonymous 2012.       */
/*-------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

// DECLARACION DE VARIABLES GLOBALES
    int Array[5]= {200,150,100,-50,300}; /* Un array de 5 números enteros */
    int sumatoria,i; /* Un entero que será la suma */

main()
{
    for(i=0;i<=4;i++){
        sumatoria = sumatoria + Array[i];
    }

    printf("Su suma es %d \n", sumatoria);
    system("pause");
}
