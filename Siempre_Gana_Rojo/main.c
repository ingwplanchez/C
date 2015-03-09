/*-------------------------------------------------*/
/* # Name:    Siempre_Gana_Rojo                    */
/* # Purpuse: Intruducir por teclado una cantidad  */
/*            de votos para la bandera de su       */
/*            eleccion Azul o roja. La bandera     */
/*            roja siempre ganará.                 */
/*                                                 */
/* # Author:    Mentor Anonymous.                  */
/* # Created:     8/10/2012.                       */
/* # Copyright:   (c) Mentor Anonymous 2012.       */
/*-------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

// DECLARACION DE VARIABLES GLOBALES

int votos; votos_azules, votos_rojos;

main()
{
    printf("Intruduzca una cantidad de votos para cada  bandera\n");
    printf("Intruduzca una cantidad de votos para la bandera azul: ");
    scanf("%d",&votos_azules);
    printf("Intruduzca una cantidad de votos para la bandera roja: ");
    scanf("%d",&votos_rojos);
    votos = votos_rojos + votos_azules;

    if(votos_azules > votos_rojos){
        printf("  \n");
        printf("La cantidad  total de votos es %d votos: \n",votos);
        printf("  \n");
        printf("RESULTADOS:\n");
        printf("  \n");
        printf("NOTEN COMO SE INTERCAMBIAN LOS VOTOS");
        printf("  \n");
        printf("  \n");
        printf("Bandera Azul: %d votos", votos_rojos);
        printf("  \n");
        printf("Bandera Roja: %d votos\n",votos_azules);
    }
    else{
        printf("La cantidad de total de votos es %d votos: \n",votos);
        printf("  \n");
        printf("RESULTADOS:\n");
        printf("  \n");
        printf("Bandera Azul: %d votos", votos_azules);
        printf("  \n");
        printf("Bandera Roja: %d votos\n",votos_rojos);
    }
    system("pause");
}
