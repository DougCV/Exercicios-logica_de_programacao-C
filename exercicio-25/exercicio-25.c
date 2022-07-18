
#include<stdio.h>
#include<stdlib.h>

int main(){
	int a,b,c,maior;
	printf("Digite 3 valores inteiros:\n");
	scanf("%d %d %d",&a,&b,&c);
	maior=(a+b+abs(a-b))/2;
	maior=(maior+c+abs(maior-c))/2;
	printf("\n%d e o maior numero\n",maior);
	return 0;
}