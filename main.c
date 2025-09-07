#include "LPC17xx.h"

//Definicion de Matrices
uint8_t A[4][3]={0,1,2,3,4,5,6,7,8,9,10,11};
uint8_t B[4][3]={12,13,14,15,16,17,18,19,20,21,22,23};
uint8_t C[3][2]={24,25,26,27,28,29};

// Almacenamiento de resultado
uint8_t Suma[4][3];
uint16_t Producto[4][2];
int main(){


//Indices. Variables locales
uint8_t i,j,k;

//Realizo la suma de A+B
for(i=0;i<4;i++)
	for(j=0;j<3;j++)
			Suma[i][j]=A[i][j]+B[i][j];


//Realizo el producto de AxC
for(i=0;i<4;i++)
	for(j=0;j<2;j++)
		for(k=0;k<3;k++)
			Producto[i][j]=Producto[i][j]+A[i][k]*C[k][j];

return 1;
}               

