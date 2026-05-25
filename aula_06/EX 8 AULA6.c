
#include <stdio.h>

int main()
{
	int A[2][2], B[2][2], R[2][2];
	int i, j, k;

	for(i=0; i<2; i++) {
		for(j=0; j<2; j++) {
			printf("Digite o valor de linha %i coluna %i: ", i+1, j+1);

			scanf("%d", &A[i][j]);
		}
	}

	for(i=0; i<2; i++) {
		for(j=0; j<2; j++) {
			printf("Digite o valor de linha %i coluna %i: ", i+1, j+1);

			scanf("%d", &B[i][j]);
		}
	}
	for(i=0; i<2; i++) {
		for(j=0; j<2; j++) {
			R[i][j] = 0;
			for(k=0; k<2; k++) {
				R[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	printf("\nResultado da multiplicação:\n");
	
	for(i=0; i<2; i++){
	    for(j=0; j<2; j++){
	         printf("%d ", R[i][j]);
	    }
	    printf("\n");
	}
	return 0;
}