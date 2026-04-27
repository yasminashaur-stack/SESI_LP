
#include <stdio.h>

int main(){
    int numeros[10];

    for (int i=0; i<10; i++){
    printf("Digite um numero:");
    scanf("%i", &numeros[i]);
    }
    printf("numeros positivos:");
     for (int i=0; i<10; i++){
     if(numeros[i] >= 0){
    printf("%i,", numeros[i]);
         }
     }
    return 0;
}