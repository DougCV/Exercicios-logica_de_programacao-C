
#include <stdio.h>

int main(){
	int cont;
	float nota1,nota2,nota3,media;
	for(cont=1;cont<=3;cont++){
		printf("Aluno: %d\n",cont);
		scanf("%f",&nota1);
		scanf("%f",&nota2);
		scanf("%f",&nota3);
		media=(nota1+nota2+nota3)/3;
		if(media>=7){
			printf("Media: %.1f - Aluno Aprovado\n\n",media);
		}else{
			printf("Media: %.1f - Aluno em Recuperacao\n\n",media);
		}
	}
	return 0;
}