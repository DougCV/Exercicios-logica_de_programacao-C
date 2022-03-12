//Calculadora de soma:

#include<stdio.h>

int main(){
	float valor1,valor2,soma;
	puts("Digite o primeiro valor: ");
	scanf("%f",&valor1);
	puts("Digite o segundo valor: ");
	scanf("%f",&valor2);
	soma=valor1+valor2;
	printf("A soma dos dois valores e: %.1f",soma);
    return 0;
}