/*-------------------------------------------------*/
/* # Name:    Program_33_Fichero_Escritura         */
/* # Purpuse: Programa que muestra como se         */
/*            escribe en un fichero.               */
/*                                                 */
/* # Author:  Wilmer Planchez (Mentor Anonymous).  */
/* # Created:     14/10/2012.                      */
/* # Copyright:   (c) Mentor Anonymous 2012.       */
/*-------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

main()
{
    FILE* fichero;                          // FILE* : Tipo de dato asociado a un fichero
    fichero = fopen("prueba.html", "wt");    /* fopen se utiliza para abrir el fichero
                                            Necesita 2 datos: el nombre del Fichero
                                            y el modo de Lectura.
                                            "w" indica que queremos escribir (write)
                                            en el fichero y "t" indica que es un
                                            archivo de texto (text)*/

    fputs("Esto es una línea\n", fichero);  /* fputs se utiliza para escribir en el
                                            fichero.fputs no avanza de linea como
                                            puts, por lo tanto hay que colocar \n*
                                            al final de la frase.*/

    fputs("Esto es otra", fichero);
    fputs(" y esto es continuación de la anterior\n", fichero);
    fclose(fichero);                        // cerramos el fichero con fclose

}
