#include <stdio.h>
#include <stdlib.h>

char frase[40];
int i;


main()
{
    printf("Intruduzca una frase: ");
    gets(frase);
    if(frase[0]=='\0'){
        printf("La frase esta vacia.\n\n\a\a\a");
    }
    else {
        printf("La frase es: %s\n\n\a",frase);
    }
    system("pause");
}
