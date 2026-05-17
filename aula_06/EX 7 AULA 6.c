
#include <stdio.h>

int main()
{
	int matriz [5][5];
	int soma = 0;

	for (int l=0; l<5; l++) {
		for (int c=0; c<5; c++) {
		    
			printf ("Digite o valor da linha: %i, Coluna %i:", l+1,c+1);
			scanf("%i", &matriz[l][c]);

		}
	}
	  for (int l = 0; l < 5; l++) {

        for (int c = 0; c < 5; c++) {

            printf("| %2i | ", matriz[l][c]);
        }

        printf("\n");
    }
	for (int l = 0; l<5; l++){
	      soma = soma + matriz[l][4 - l];
	}
	printf("\nA soma da diagonal secundária é:%i\n", soma);
	
	return 0;
}