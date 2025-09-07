// Fichero que retorna 1 o 0 en funcion de si el numero
// que recibe como parametro de entrada es primo o no.
#include "lpc17xx.h"
uint8_t esprimo(uint16_t primo){
uint16_t divisor;
uint16_t divisores=0;
	
	for (divisor=2;divisor<primo;divisor++){
		if((primo%divisor)==0){
			divisores++;
		}
}
if(divisores == 0)
	return 1;
else
	return 0;
}
