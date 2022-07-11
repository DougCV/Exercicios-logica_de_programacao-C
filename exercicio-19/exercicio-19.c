
#include <stdio.h>

int main(){
	int x;
	puts("Digite um valor para definir o tamanho do vetor: ");
	scanf("%d",&x); 
	int num [x],i,j;
	for(i=0;i<x;i++){
		num[i]=i+1;
	}
	for(j=0;j<x;j++){
		printf("[%d] ",num[j]);
	}
	return 0;
}