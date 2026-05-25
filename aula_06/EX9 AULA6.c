
#include <stdio.h>

int main()
{
	int matriz [5][5];
	int i, j;

	for(i=0; i<5; i++) {
		for(j=0; j<5; j++) {
			printf("Digite o valor de linha %i coluna %i: ", i+1, j+1);

			scanf("%d", &matriz[i][j]);
			if(matriz[i][j] < 0) {
				matriz[i][j] = 0;
			}
		}
	}
	printf("\nMatriz final:\n");
	for(i=0; i<5; i++) {
	    
	for(j=0; j<5; j++) {
	    printf("%d", matriz[i][j]);
		}
		printf("\n");
	}

	return 0;
}