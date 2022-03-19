//Cálculo da média de notas do aluno (IF-ELSE):

#include<stdio.h>

int main(){
	char aluno;
	float p1, t1, p2, t2, media;
	puts("Digite o nome do aluno: ");
	scanf("%s",&aluno);
	puts("Digite a nota da Prova 1: ");
	scanf("%f",&p1);
	puts("Digite a nota do Trabalho 1: ");
	scanf("%f",&t1);
	puts("Digite a nota da Prova 2: ");
	scanf("%f",&p2);
	puts("Digite a nota do Trabalho 2: ");
	scanf("%f",&t2);
	media=(p1+t1+p2+t2)/4;
	if(media==10){
		printf("Media: %.1f",media);
		puts("\nAluno Aprovado com Louvor! :D");
	}else if(media>=7){
		printf("Media: %.1f",media);
		puts("\nAluno Aprovado! :)");
	}else{
		printf("Media: %.1f",media);
		puts("\nAluno Reprovado! :(");
	}
	return 0;
}