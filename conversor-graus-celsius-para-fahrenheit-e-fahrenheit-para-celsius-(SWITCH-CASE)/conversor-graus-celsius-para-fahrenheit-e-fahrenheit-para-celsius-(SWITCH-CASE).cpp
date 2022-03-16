//Conversor de graus Celsius para Fahrenheit e Fahrenheit para Celsius (SWITCH-CASE);

#include<stdio.h>

int main(){
	float celsius,fahrenheit;
	int conversao;
	puts("Digite 1 para converter graus Celsius para Fahrenheit ou digite 2 para converter graus Fahrenheit para Celsius:");
	scanf("%d",&conversao);
	switch(conversao){
		case 1:
			puts("Digite a temperatura em graus Celsius: ");
			scanf("%f",&celsius);
			fahrenheit=((celsius*9)/5)+32;
			printf("A temperatura em graus Fahrenheit e: %.2f",fahrenheit);
		break;
		case 2:
			puts("Digite a temperatura em graus Fahrenheit: ");
			scanf("%f",&fahrenheit);
			celsius=((fahrenheit-32)*5)/9;
			printf("A temperatura em graus Celsius e: %.2f",celsius);
		break;
		default:
			printf("Opcao invalida digite novamente.");
	}
	return 0;
}