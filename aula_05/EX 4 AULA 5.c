
#include <stdio.h>

int main(){
    int numeros[6];
    int x;

    for (int i=0; i<6; i++){
    printf("Digite um numero: ");
    scanf("%i", &numeros[i]);
    }
    x = numeros[0];
     for (int i=0; i<6; i++){
         if(numeros[i] > x){
             x = numeros[i];
         }
     }
      printf("O maior valor e: %i", x);
    return 0;
}