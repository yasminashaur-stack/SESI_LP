
#include <stdio.h>

int main()
{
	int matriz [4][4];
	int contador = 0;

	for (int l=0; l<4; l++) {
		for (int c=0; c<4; c++) {
			printf ("Digite o valor da linha: %i, Coluna %i:", l+1,c+1);
			scanf("%i", &matriz[l][c]);

			if(matriz[l][c] > 10) {
				contador++;
			}
		}
	}
	printf("\nQuantidades de numeros maiores que 10: %i\n", contador);
	return 0;
}