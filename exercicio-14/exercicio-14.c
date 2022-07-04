
#include <stdio.h>

int main(){
	int setor,cadeira;
	for(setor=1;setor<=4;setor++){
		for(cadeira=1;cadeira<=200;cadeira++){
			printf("\nSetor: %d - Cadeira: %d",setor,cadeira);
		}
	}
	return 0;
}