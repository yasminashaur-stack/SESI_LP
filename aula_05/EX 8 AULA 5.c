
#include <stdio.h>

int main(){
    int numeros[10];
    int soma = 0;
    float media;

    for(int i=0; i<10; i++){
        printf("digite um numero:");
        scanf("%i", &numeros[i]);
    
    soma = soma + numeros[i];
    }
    media = soma/10;
    printf("a media e:%.2f", media);
    
    printf("\nnumeros maiores que a media e:");

    for (int i=0; i<10; i++){
        if(numeros[i] > media){
        printf("%i,", numeros[i]);
    }
    }
        
    return 0;
}