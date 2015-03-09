#include <stdio.h>
#include <stdlib.h>

char texto [100];
int flag=1;

main()
{
    FILE* fichero;
    fichero = fopen("frases.txt","wt");

    do{
        printf("Teclee algunas frases, o presione enter para finalizar: ");
        gets(texto);
        printf("\n");
        if(texto[0]=='\0'){
            flag = 0;
        }
        fputs(texto, fichero);
        fputs("\n", fichero);
    }while(flag==1);
    printf("Fin del programa . . .\n\n");
    fclose(fichero);

}
