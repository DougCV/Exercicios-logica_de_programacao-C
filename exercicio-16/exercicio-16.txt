
#include <stdio.h>

int main(){
	int setor,cadeira;
	for(setor=1;setor<=4;setor++){
		cadeira=1;
		while(cadeira<=200){
			printf("\nSetor: %d - Cadeira: %d",setor,cadeira);
			cadeira++;
		}
	}
	return 0;
}