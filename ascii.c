#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{	
	printf("\n");
	printf("TABELA ASCII:\n");
	printf("\n");

	// TABELA ASCII
	for(int i = 32; i <= 126; ++i){
		printf("codigo = %i caractere = %c \n", i, i);
	}

	printf("\n");
	printf("TABELA ASCII EXTENDIDA:\n");
	printf("\n");

	// TABELA ASCII EXTENDIDA
	for(int j = 128; j <= 255; ++j){
		printf("codigo = %i caractere = %c \n", j, j);
	}

	printf("\nDigite ENTER para fechar\n");
	getchar(); // PAUSA

	return 0;
}
