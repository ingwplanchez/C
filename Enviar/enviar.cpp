/*------------------------------------------------------------------*/
/* UPCO ICAI - Departamento de Electr�nica y Autom�tica             */
/*------------------------------------------------------------------*/
/* enviar.cpp: Prueba API para enviar v�a RS232                     */
/*                                                                  */
/* Autor: Jos� Antonio Rodr�guez Mond�jar                           */
/* Fecha: 12/11/04                                                  */
/* Versi�n: 1.0                                                     */
/*------------------------------------------------------------------*/

#include "serie.h"
#include "windows.h"
#include "stdio.h"


main(){
	HANDLE hPort;
	BOOL bRes;
	char c;

	hPort=OpenSerialPort("COM1",CBR_9600,8,NOPARITY,TWOSTOPBITS,5000);

	if (hPort==INVALID_HANDLE_VALUE) {
		printf("Error abriendo puerto com1");
		return 1;
	}

	while (1) {
		c=getchar();
		bRes=SerialSendByte(hPort,c);
		if (!bRes) {
			printf("Error escribiendo en puerto com1");
			return 1;
		}
		if (c=='x') {
			break;
		}
	}


	CloseSerialPort(hPort);
}


