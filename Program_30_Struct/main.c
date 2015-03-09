/*-------------------------------------------------*/
/* # Name:    Program_30_Struct                    */
/* # Purpuse: Programa que muestra como se utiliza */
/*            el tipo de dato Struct               */
/*                                                 */
/* # Author:  Wilmer Planchez (Mentor Anonymous).  */
/* # Created:     11/10/2012.                      */
/* # Copyright:   (c) Mentor Anonymous 2012.       */
/*-------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

main()
{
    struct{
    char inicial;
    int edad;
    float nota;
    } persona;

    persona.inicial = 'J';
    persona.edad = 20;
    persona.nota = 7.5;
    printf("La edad es %d", persona.edad);
    printf(" \n ");
    system("pause");
}
