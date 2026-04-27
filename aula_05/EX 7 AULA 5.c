
#include <stdio.h>

int main(){
    int numeros[10];
    int soma = 0;
    float media;

    for (int i=0; i<10; i++){
    printf("Digite um numero:");
    scanf("%i", &numeros[i]);
    
    soma = soma + numeros[i];
    }
    media = soma/10;
    printf("a media e:%.2f", media);
        
    return 0;
}