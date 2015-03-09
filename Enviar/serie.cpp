/*------------------------------------------------------------------*/
/* UPCO ICAI - Departamento de Electrónica y Automática             */
/*------------------------------------------------------------------*/
/* serie.cpp: Manejo comunicaciones serie                           */
/*                                                                  */
/* Autor: José Antonio Rodríguez Mondéjar                           */
/* Fecha: 12/11/04                                                  */
/* Versión: 1.0                                                     */
/*------------------------------------------------------------------*/

#include "serie.h"

HANDLE OpenSerialPort(	char *psPort, 		// "COM1","COM2"
						DWORD dwBaudRate, 	// CBR_9600, CBR_19200. CBR_56000
						BYTE bByteSize,		// 7,8
						BYTE bParity, 		// NOPARITY, EVENPARITY, ODDPARITY
						BYTE bStopBits,		// ONESTOPBIT, ONE5STOPBITS, TWOSTOPBITS
						DWORD Timeout       // Timeout
					 ) {
					 
	HANDLE hPort;								// port handler
	DCB dcbPort;								// Port configuration
	COMMTIMEOUTS commTimeouts;					// Port Timeouts
	DWORD dwError;								// Error code

	// Open Serial Port
	hPort=CreateFile(
				psPort,							// pointer to name of the file 
				GENERIC_READ | GENERIC_WRITE,	// access (read-write) mode 
				0,								// share mode: 0 the object cannot be share 
				NULL,							// pointer to security attributes: NULL the handle cannot be inherited 
				OPEN_EXISTING,					// how to create: Comx exist 
				0,								// file/port attributes 
				NULL); 							// handle to file/port with attributes to copy  

												// If the function fails, the return value 
												//is INVALID_HANDLE_VALUE
	if ( hPort == INVALID_HANDLE_VALUE ) {
		dwError = GetLastError (); 				// Flush error code
		return hPort;
	}
	
	// Set Port Configuration
	
	// Delete DCB configuration
	FillMemory(&dcbPort, sizeof(dcbPort), 0);
	dcbPort.DCBlength = sizeof(dcbPort);

	// Current DCB in use for the communications port
	GetCommState (hPort, &dcbPort);

	// Update DCB with new parameters
	dcbPort.BaudRate = dwBaudRate;         		
	dcbPort.ByteSize = bByteSize;                
	dcbPort.Parity = bParity;            		
	dcbPort.StopBits = bStopBits;        		

	// Fixed parameters (Disable XON-XOFF and modem handshake)
	dcbPort.fBinary = TRUE;               		// Binary mode; no EOF check 
	dcbPort.fParity = TRUE;               		// Enable parity checking 
	dcbPort.fOutxCtsFlow = FALSE;         		// No CTS output flow control 
	dcbPort.fOutxDsrFlow = FALSE;         		// No DSR output flow control 
	dcbPort.fDtrControl = DTR_CONTROL_ENABLE; 
												// DTR flow control type 
												// Raises the DTR line when the device is opened
	dcbPort.fDsrSensitivity = FALSE;      		// DSR sensitivity 
	dcbPort.fTXContinueOnXoff = TRUE;     		// XOFF continues Tx 
	dcbPort.fOutX = FALSE;                		// No XON/XOFF out flow control 
	dcbPort.fInX = FALSE;                 		// No XON/XOFF in flow control 
	dcbPort.fErrorChar = FALSE;           		// Disable error replacement 
	dcbPort.fNull = FALSE;                		// Disable null stripping 
	dcbPort.fRtsControl = RTS_CONTROL_ENABLE; 
												// RTS flow control 
												// Raises the RTS line when the device is opened
	dcbPort.fAbortOnError = FALSE;        		// Do not abort reads/writes on 
												// error
	// Set new configuration
	if (!SetCommState (hPort, &dcbPort)) {
		dwError = GetLastError (); 				// Flush error code
		CloseSerialPort(hPort);
		hPort = INVALID_HANDLE_VALUE;
		return hPort;
	}

	// Set Port Timeouts
	// Timeouts preparation  MORE INFORMATION IN WIN32 API: COMMTIMEOUTS 
	commTimeouts.ReadIntervalTimeout = 0;  			// Specifies the maximum time, in milliseconds, allowed to elapse between the arrival
													// of two characters on the communications line
													// A value of zero indicates that interval time-outs are not used.
	commTimeouts.ReadTotalTimeoutMultiplier = 50;   // Specifies the multiplier, in milliseconds, used to calculate 
													// the total time-out period for read operations. 
													// For each read operation, this value is multiplied
													// by the requested number of bytes to be read.
	commTimeouts.ReadTotalTimeoutConstant = Timeout;// Specifies the constant, in milliseconds, used to calculate the total 
													// time-out period for read operations
													// 
	commTimeouts.WriteTotalTimeoutMultiplier = 10;  // Specifies the multiplier, in milliseconds, used to calculate the 
													// total time-out period for write operations. 
													// For each write operation, this value is multiplied
													// by the number of bytes to be written.
	commTimeouts.WriteTotalTimeoutConstant = 1000;  // Specifies the constant, in milliseconds, used to calculate the total time-out period
													// for write operations
													// See de win32 api for more information
	// Set Timeouts
	if (!SetCommTimeouts (hPort, &commTimeouts)) {
		dwError = GetLastError (); 					// Flush error code
		CloseSerialPort(hPort);
		hPort = INVALID_HANDLE_VALUE;
		return hPort;
	}
	return hPort;
}

BOOL SerialSendByte(HANDLE hPort, BYTE byte){
	BOOL bRes;
	DWORD dwError, dwNumBytesWritten=0;
	
	bRes=WriteFile(
					hPort,							// handle to file or serial port to write to 
					&byte,							// pointer to data to write to file 
					1,								// number of bytes to write 
					&dwNumBytesWritten,				// pointer to number of bytes written 
					NULL							// NULL
					);
		

	if ((!bRes)||(dwNumBytesWritten!=1)){
		dwError = GetLastError ();		// Flush error code
	}
	return bRes;
}

BOOL SerialReceiveByte(HANDLE hPort, BYTE *pbyte, BOOL *pTimeout){
	BOOL bRes;
	DWORD dwError, lpNumberOfBytesRead=0;
	
	*pTimeout=FALSE;
	bRes=ReadFile(	hPort,							// handle of file or serial port to read 
					pbyte,							// address of buffer that receives data  
					1,								// number of bytes to read 
					&lpNumberOfBytesRead,			// address of number of bytes read 
					NULL 							// NULL  
					);

	if (!bRes) {
		dwError = GetLastError ();		// Flush error code
	}
	if ((bRes)&&(lpNumberOfBytesRead==0)){
		*pTimeout = TRUE;				
	}
	return bRes;
}	



BOOL CloseSerialPort(HANDLE hPort){
	BOOL bRes;
	DWORD dwError;
	
	bRes=CloseHandle(hPort);
	if (!bRes) {
		dwError = GetLastError (); 				// Flush error code
	}
	return bRes;
}
