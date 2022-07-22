
#include<stdio.h>

int main(){
	int matriz[4][4],coluna,linha,numero=1;
	for(linha=0;linha<4;linha++){
		for(coluna=0;coluna<4;coluna++){
			matriz[linha][coluna]=numero; 
			numero++;
		}
	}
	for(linha=0;linha<4;linha++){
		for(coluna=0;coluna<4;coluna++){
			printf("Linha %d | Coluna %d [%d]\n",linha,coluna,matriz[linha][coluna]);
		}
	}
	return 0;
}