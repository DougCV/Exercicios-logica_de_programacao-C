
#include <stdio.h>

int main(){
	int num;
	puts("Digite um numero:");
	scanf("%d",&num);
	if((num%2)==0){
		printf("\nO numero %d e divisivel por 2",num);
	}
	if((num%5)==0){
		printf("\nO numero %d e divisivel por 5",num);
	}
	if((num%10)==0){
		printf("\nO numero %d e divisivel por 10",num);
	}
	if((num%2)!=0 && (num%5)!=0 && (num%10)!=0){
		printf("\nO numero %d NAO e divisivel por 2, 5 ou 10",num);
	}
	return 0;
}