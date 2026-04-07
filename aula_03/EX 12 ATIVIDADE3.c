#include <stdio.h>
    int main(){
        
   int contador = 0;
   
     for(int i = 1; i <= 50; i++){
         if(i % 2 == 0){
        printf("%d\n", i);
        contador++;
     }
     }
     printf("quantidade de números pares: %i", contador);
    return 0;
    }
    
