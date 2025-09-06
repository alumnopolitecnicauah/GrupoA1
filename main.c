#include <lpc17xx.h>
#include "primos.h"

uint16_t primos[10000];

int main(){

uint16_t i,j=0;  

for(i=2;i<65535;i++){	
	if(esprimo(i)== 1){
		primos[j]=i;
		j++;
	}
}
while(1);
}



