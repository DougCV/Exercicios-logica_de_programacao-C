//Cálculo do imposto de produto (com taxa de 10%):

#include<stdio.h>

int main(){
	float valor;
	const float imposto=0.1;
	puts("Digite o valor do produto: ");
	scanf("%f",&valor);
	printf("O valor do imposto e %.2f",valor*imposto);
	return 0;
}