
#include<stdio.h>

int main(){
	int A=10,B=20,C=30,x;
	printf("\nA=%d - B=%d - C=%d",A,B,C);
	x=A;
	A=B;
	B=C;
	C=x;
	printf("\nA=%d - B=%d - C=%d",A,B,C);
	return 0;
}