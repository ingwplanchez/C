/*-------------------------------------------------*/
/* # Name:    Program_24_Cadenas                   */
/* # Purpuse: Programa que muestra como se utiliza */
/*            una cadena de caracteres con Arrays  */
/*                                                 */
/* # Author:  Wilmer Planchez (Mentor Anonymous).  */
/* # Created:     10/10/2012.                      */
/* # Copyright:   (c) Mentor Anonymous 2012.       */
/*-------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

// DECLARACION DE VARIABLES GLOBALES
char Array[31]; // Se Podran guardar 30 letras o caracteres

main(){

    printf("Introduce tu nombre: ");
    scanf("%s", &Array);
    //gets(Array); // otra forma
    printf("Tu nombre es %s \n", Array);
    system("pause");
}


