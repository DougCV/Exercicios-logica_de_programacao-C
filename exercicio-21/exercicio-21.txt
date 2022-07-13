
#include<stdio.h>
#include<string.h>

int main(){
	char nome[100];
	int comprimento;
	puts("Digite um nome: ");
	scanf("%s",&nome);
	comprimento=strlen(nome);
	if(comprimento>=4){
		printf("\nSeu nome tem  %d caracteres",comprimento);
		printf("\nAs 4 primeiras letras do nome sao: %c | %c | %c | %c",nome[0],nome[1],nome[2],nome[3]);
	}else{
		puts("\nSeu nome tem menos de 4 caracteres");
	}
	return 0;
}