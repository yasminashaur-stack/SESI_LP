#include <stdio.h>

int main () {

	int n1, n2;
	int resultado = 0;
	int opcao;
	do {
		printf("\nDigite uma opção:");
		printf("\n________________________\n");
		printf("|* 1 - SOMAR            |\n");
		printf("|* 2 - DIVIDIR          |\n");
		printf("|* 3 - MULTIPLICAR      |\n");
		printf("|* 4 - SUBTRAIR         |\n");
		printf("|* 0 - SAIR             |\n");
		printf("|_______________________|\n");
		scanf("%i", &opcao);

		if(opcao >= 1 && opcao <=4) {
			printf("Digite um número:");
			scanf("%i", &n1);

			printf("Digite outro numero:");
			scanf("%i", &n2);
		}
		if(opcao == 1) {
			resultado = n1+n2;
			printf("\nO resultado é:%i\n", resultado);
		}
		else if(opcao == 2) {
			if(n2 != 0)
				printf("\nO resultado é:%i\n", n1/n2);
			else
				printf("Não pode dividir por zero\n");
		}
		else if (opcao == 3) {
			printf("\nO Resultado é:%i\n", n1*n2);
		}
		else if (opcao == 4) {
			printf("\nO Resultado é:%i\n", n1-n2);
		}
	} while(opcao != 0);
	return 0;

}
