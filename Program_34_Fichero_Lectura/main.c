/*-------------------------------------------------*/
/* # Name:    Program_34_Fichero_Lectura           */
/* # Purpuse: Programa que muestra como se         */
/*            Lee un fichero.                      */
/*                                                 */
/* # Author:  Wilmer Planchez (Mentor Anonymous).  */
/* # Created:     14/10/2012.                      */
/* # Copyright:   (c) Mentor Anonymous 2012.       */
/*-------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

main()
{
    FILE* fichero;
    char nombre[80] = "c:\\autoexec.bat";
    char linea[81];
    fichero = fopen(nombre, "rt");          // se abre el fichero y se indica que se va
                                            // leer el archivo de texto.

    if (fichero == NULL){                   // Si el archivo o existe
        printf("No existe el fichero!\n");  // Mostrar mensaje
        exit(1);                            // Funcion que permite avandona el programa
                                            // en cualquier punto.
    }

    fgets(linea, 80, fichero);              /* fgets se utiliza para leer el fichero.
                                               la longitud del texto leido se restringe
                                               a 80 caracteres.*/
    puts(linea);                            // Muestra en pantalla el texto leido.
    fclose(fichero);                        // Cierra el fichero.

}
