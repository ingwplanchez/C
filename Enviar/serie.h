/*------------------------------------------------------------------*/
/* UPCO ICAI - Departamento de Electrónica y Automática             */
/*------------------------------------------------------------------*/
/* serie.h: Manejo comunicaciones serie                             */
/*                                                                  */
/* Autor: José Antonio Rodríguez Mondéjar                           */
/* Fecha: 12/11/04                                                  */
/* Versión: 1.0                                                     */
/*------------------------------------------------------------------*/

#ifndef serie_h
#define serie_h

#include <windows.h>

// Open Serial port
HANDLE OpenSerialPort(	char *psPort, 		// "COM1","COM2"
						DWORD bBaudRate, 	// CBR_9600, CBR_19200. CBR_56000
						BYTE bByteSize, 	// 7,8
						BYTE bParity, 		// NOPARITY, EVENPARITY, ODDPARITY
						BYTE bStopBits,		// ONESTOPBIT, ONE5STOPBITS, TWOSTOPBITS
						DWORD ReadTimeout   // Programmable Read Timeout
					 );

// Send a byte				 
BOOL SerialSendByte(HANDLE hPort, BYTE byte);
// return TRUE: Send OK

// Receive a byte
BOOL SerialReceiveByte(HANDLE hPort, BYTE *pbyte, BOOL *pTimeout);
// return TRUE & *pTimeout TRUE Send OK
// return TRUE & *pTimeout FALSE Timeout
// return FALSE Receive Error
				
// Close Serial Port
BOOL CloseSerialPort(HANDLE hPort);

// Write&Read strings from serial port using standard file I/O functions

/*BOOL ReadFile(
    HANDLE hFile,					// handle of file or serial port to read 
    LPVOID lpBuffer,				// address of buffer that receives data  
    DWORD nNumberOfBytesToRead,		// number of bytes to read 
    LPDWORD lpNumberOfBytesRead,	// address of number of bytes read 
    LPOVERLAPPED lpOverlapped 		// NULL  
   );
*/

/*
BOOL WriteFile(

    HANDLE hFile,					// handle to file or serial port to write to 
    LPCVOID lpBuffer,				// pointer to data to write to file 
    DWORD nNumberOfBytesToWrite,	// number of bytes to write 
    LPDWORD lpNumberOfBytesWritten,	// pointer to number of bytes written 
    LPOVERLAPPED lpOverlapped 		// NULL
   );	
*/

#endif
