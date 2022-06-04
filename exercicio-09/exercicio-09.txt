
#include<stdio.h>

int main(){
	char operacao;
	float valor1,valor2,soma,subtracao,multiplicacao,divisao;
	puts("Digite o primeiro valor: ");
	scanf("%f",&valor1);
	puts("Digite o sinal da operacao [+]; [-]; [*]; [/]: ");
	scanf("%s",&operacao);
	puts("Digite o segundo valor: ");
	scanf("%f",&valor2);
	switch(operacao){
		case '+':
		soma=valor1+valor2;
		printf("A soma entre os dois valores e: %.2f",soma);
			break;
		case '-':
		subtracao=valor1-valor2;
		printf("A subtracao entre os dois valores e: %.2f",subtracao);
			break;
		case '*':
		multiplicacao=valor1*valor2;
		printf("A multiplicacao entre os dois valores e: %.2f",multiplicacao);
			break;
		case '/':
		divisao=valor1/valor2;
		printf("A divisao entre os dois valores e: %.2f",divisao);
			break;
		default:
			puts("Operacao invalida, digite novamente.");	
	}
	return 0;
}