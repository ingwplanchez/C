/*------------------------------------------------------------------*/
/* UPCO ICAI - Departamento de Electrónica y Automática             */
/*------------------------------------------------------------------*/
/* enviar.cpp: Prueba API para enviar vía RS232                     */
/*                                                                  */
/* Autor: José Antonio Rodríguez Mondéjar                           */
/* Fecha: 12/11/04                                                  */
/* Versión: 1.0                                                     */
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


