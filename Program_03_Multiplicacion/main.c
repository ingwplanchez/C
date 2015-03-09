/*-------------------------------------------------*/
/* # Name:    Program_03_Multiplicacion.           */
/* # Purpuse: Pedir al usuario ingresar 2 numeros  */
/*            enteros para  luego calcular su     .*/
/*            producto.                            */
/*                                                 */
/* # Author:  Wilmer Planchez (Mentor Anonymous).  */
/* # Created:     6/10/2012.                       */
/* # Copyright:   (c) Mentor Anonymous 2012.       */
/*-------------------------------------------------*/

#include <stdio.h>      // Indica que queremos funciones de entrada salida
#include <stdlib.h>     // indica que deseamos usar algunas funciones predefinidas

// DECLARACION DE VARIABLES GLOBALES

int num1, num2 , producto;

main()
{
    printf("Introduce el primer numero: ");
    scanf("%d", &num1);
    printf("Introduce el segundo numero: ");
    scanf("%d", &num2);
    producto = num1 * num2;
    printf("El Producto de ambos numeros es, %d ", producto);
    system("pause");

}
