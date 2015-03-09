
/*-------------------------------------------------*/
/* # Name:    Program_01_Int.                      */
/* # Purpuse: Mostrar en pantalla la suma          */
/*            de 2 numeros.                        */
/*                                                 */
/* # Author:  Wilmer Planchez (Mentor Anonymous).  */
/* # Created:     6/10/2012.                       */
/* # Copyright:   (c) Mentor Anonymous 2012.       */
/*-------------------------------------------------*/

#include <stdio.h>      // Indica que queremos funciones de entrada salida
#include <stdlib.h>     // indica que deseamos usar algunas funciones predefinidas

// DECLARACIO DE VARIABLES GLOBALES

int numero1 = 234;       // numero1: Variable del tipo Entero(int)
int numero2 = 567;      // numero2: Variable del tipo Entero(int)
int suma;               // suma: Variable del tipo Entero(int)

main()  // Funcion principal
{       // Inicio de main

    suma = numero1 + numero2;   // Se calcula la suma

    printf("El primer numero es %d. \n", numero1);      // Muestra en pantalla el Primer numero
    printf("El Segundo numero es %d. \n", numero2);    // Muestra en pantalla el Segundo numero
    printf("Su suma es de %d. \n", suma);                    // Muestra en pantalla la suma

} // Fin de main

