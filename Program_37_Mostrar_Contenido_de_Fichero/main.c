#include <stdio.h>
#include <stdlib.h>

main()
{
    FILE* fichero;
    char nombre[80];
    char linea[81];

    printf("Introduzca el nombre del fichero con su extencion: ");
    gets(nombre);
    fichero = fopen(nombre, "rt");

    if (fichero == NULL){
        printf("No existe el fichero!\n");
        exit(1);
    }
    while (! feof(fichero)) {       // mientras no sea el fin del fichero hacer . . .

        fgets(linea, 80, fichero);
        puts(linea);

    }
    printf("\n");
    printf("Fin del Fichero.\n");
    system("pause");
    fclose(fichero);

}
