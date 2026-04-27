
#include <stdio.h>

int main(){
    int numeros[8];
    int soma = 0;

    for (int i=0; i<8; i++){
    printf("Digite um numero: ");
    scanf("%i", &numeros[i]);
    }
   
     for (int i=0; i<8; i++){
         soma = soma + numeros[i];
     }
      printf("A soma dos numeros e: %i", soma);
    return 0;
}