#include "lpc17xx.h"
#include <math.h>
uint8_t esprimo(uint16_t primo){
uint16_t divisor;

for(divisor=sqrt(primo+1);divisor>=2;divisor--){
		if((primo%divisor)==0){
			divisores++;
		}
}
if(divisores == 0)
	return 1;

}
