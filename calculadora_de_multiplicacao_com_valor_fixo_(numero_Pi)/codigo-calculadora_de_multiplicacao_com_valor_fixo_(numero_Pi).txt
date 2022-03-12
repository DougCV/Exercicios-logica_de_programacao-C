//Calculadora de multiplicação com valor fixo (número Pi):

#include<stdio.h>

int main(){
	float valor,resultado;
	const float pi=3.14;
	puts("Digite um valor para multiplicacao: ");
	scanf("%f",&valor);
	resultado=valor*pi;
	printf("o valor do resultado e %.1f",resultado);
	return 0;
}