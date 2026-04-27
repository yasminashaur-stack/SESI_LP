
#include <stdio.h>

int main(){
    int numeros[5];

    for (int i=0; i<=5; i++){
    printf("Digite um numero: ");
    scanf("%i", &numeros[i]);
    }
    printf("Os numeros foram:");
     for (int i=0; i<=5; i++){
     printf("%i", numeros[i]);
     }
    return 0;
}