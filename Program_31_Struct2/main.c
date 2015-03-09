/*-------------------------------------------------*/
/* # Name:    Program_31_Struct2                   */
/* # Purpuse: Programa que muestra como se utiliza */
/*            el tipo de dato Struct               */
/*                                                 */
/* # Author:  Wilmer Planchez (Mentor Anonymous).  */
/* # Created:     11/10/2012.                      */
/* # Copyright:   (c) Mentor Anonymous 2012.       */
/*-------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

    struct datosPersona{ // Se definen como seran los datos de nuestros registro

    char inicial;
    int edad;
    float nota;
    };

main()
{
    struct datosPersona ficha; // Definicion de las variables del tipo de dato
    ficha.inicial = 'J';
    ficha.edad = 20;
    ficha.nota = 7.5;
    printf("La edad es %d", ficha.edad);
    printf(" \n ");
    system("pause");
}
