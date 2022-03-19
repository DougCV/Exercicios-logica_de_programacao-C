//Indicar se é maior de idade, se já pode votar e se pode trabalhar (IF-ELSE):

#include<stdio.h>

int main(){
	int nascimento, idade;
	char trabalho;
	puts("Digite o ano do seu nascimento: ");
	scanf("%d",&nascimento);
	idade=2022-nascimento;
	printf("Sua idade atual e: %d anos.",idade);
	if(idade=18){
		puts("\nE maior de idade, ja pode votar e trabalhar.");
	}else if(idade>=16){
		puts("\nE menor de idade, ja pode votar e trabalhar em alguns setores.");
	}else if(idade>=14){
		puts("\nE menor de idade, nao pode votar mas pode ser jovem aprendiz.");
	}else{
		idade<=14;
		puts("\nE menor de idade e so pode estudar.");
	}
	return 0;
}