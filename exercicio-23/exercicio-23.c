
#include<stdio.h>

int main(){
	int numero,resultado;
	puts("Digite um numero inteiro para saber se e Par ou Impar e se e Positivo ou Negativo:");
	scanf("%d",&numero);
	resultado=numero%2;
		if(resultado==0){
			printf("\nNumero PAR");
		}else{
			printf("\nNumero IMPAR");
		}
		if(numero>=0){
			printf("\nNumero POSITIVO");
		}else{
			printf("\nNumero NEGATIVO");
		}
	return 0;
}