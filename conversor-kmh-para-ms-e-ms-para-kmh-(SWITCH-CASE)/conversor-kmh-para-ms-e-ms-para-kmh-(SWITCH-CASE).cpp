//Conversor quilômetro por hora (Km\h) para metros por segundo (m\s) e metros por segundo (m\s) para quilômetro por hora (Km\h) (SWITCH-CASE);

#include<stdio.h>

int main(){
	float kmh,ms;
	int conversao;
	puts("Digite 1 para converter Km/h para m/s ou digite 2 para converter m/s para Km/h:");
	scanf("%d",&conversao);
	switch(conversao){
		case 1:
			puts("Digite a velocidade em Km/h: ");
			scanf("%f",&kmh);
			ms=kmh/3.6;
			printf("A velocidade em m/s e: %.2f",ms);
		break;
		case 2:
			puts("Digite a velocidade em m/s: ");
			scanf("%f",&ms);
			kmh=ms*3.6;
			printf("A velocidade em Km/h e: %.1f",kmh);
		break;
		default:
			printf("Opcao invalida digite novamente.");
	}
	return 0;
}