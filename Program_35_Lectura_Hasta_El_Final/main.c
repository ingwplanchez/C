/*-------------------------------------------------*/
/* # Name:    Program_35_Lectura_Hasta_El_Final    */
/* # Purpuse: Programa que muestra como se         */
/*            Lee un fichero has el final.         */
/*                                                 */
/* # Author:  Wilmer Planchez (Mentor Anonymous).  */
/* # Created:     17/10/2012.                      */
/* # Copyright:   (c) Mentor Anonymous 2012.       */
/*-------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

main()
{
    FILE* fichero;
    char nombre[80] = "c:\\autoexec.bat";
    char linea[81];
    fichero = fopen(nombre, "rt");
    if (fichero == NULL){
        printf("No existe el fichero!\n");
        exit(1);
    }
    while (! feof(fichero)) {       // mientras no sea el fin del fichero hacer . . .
        fgets(linea, 80, fichero);
        puts(linea);
    }
    fclose(fichero);

}
