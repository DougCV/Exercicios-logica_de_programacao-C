
#include <stdio.h>

int main(){
	int cont=1;
	float nota1,nota2,nota3,media;
	while(cont<=3){
		printf("Alunos: %d\n",cont);
		scanf("%f",&nota1);
		scanf("%f",&nota2);
		scanf("%f",&nota3);
		media=(nota1+nota2+nota3)/3;
		if(media>=7){
			printf("Media: %.1f - Aluno Aprovado\n\n",media);
		}else{
			printf("Media: %.1f - Aluno em Recuperacao\n\n",media);
		}
		cont++;
	}
	return 0;
}