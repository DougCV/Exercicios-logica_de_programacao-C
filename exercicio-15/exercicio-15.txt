
#include <stdio.h>

int main(){
	int setor,cadeira;
	while(setor<=4){
		cadeira=1;
		while(cadeira<=200){
			printf("\nSetor: %d - Cadeira: %d",setor,cadeira);
			cadeira++;
		}
	setor++;	
	}
	return 0;
}