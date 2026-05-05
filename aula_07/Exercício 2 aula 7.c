#include <stdio.h>
int divisao(int a, int b) {
	return a / b;
}

int soma(int a, int b) {
	return a + b;
}

int multiplicacao(int a, int b) {
	return a * b;
}

int subtracao(int a, int b) {
	return a - b;
}


void imprimirResultado(char *operacao,int valor) {
	printf("\nA %s de dois valores: %i",operacao, valor);
}


int main() {
	int n1, n2;
	int resultado = 0;

	printf("Digite o primeiro valor:");
	scanf("%i", &n1);

	printf("Digite o segundo valor:");
	scanf("%i", &n2);

	resultado = divisao(n1, n2);
	imprimirResultado("divisão", resultado);
	
    resultado = soma(n1, n2);
    imprimirResultado("soma", resultado);
    
    resultado = multiplicacao(n1, n2);
    imprimirResultado("multiplicação", resultado);
    
    resultado = subtracao(n1, n2);
    imprimirResultado("subtração", resultado);

	return 0;
}