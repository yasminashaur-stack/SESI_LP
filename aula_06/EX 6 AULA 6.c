
#include <stdio.h>

int main()
{
	int matriz [4][4];
	int maior, menor;

	for (int l=0; l<4; l++) {
		for (int c=0; c<4; c++) {
			printf ("Digite o valor da linha: %i, Coluna %i:", l+1,c+1);
			scanf("%i", &matriz[l][c]);

			if (l == 0 && c == 0){
			maior = matriz[l][c];
			menor = matriz[l][c];
		}
		if (matriz[l][c] > maior) {
			maior = matriz[l][c];
		}
		if(matriz[l][c] < menor) {
			menor = matriz[l][c];
			}
		}
	}
	printf("Maior valor:%i\n", maior);
	printf("Menor valor:%i\n", menor);
	
	return 0;
}