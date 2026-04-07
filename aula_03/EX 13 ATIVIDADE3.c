#include <stdio.h>
    int main(){
        
   int soma = 0;
   
     for(int i = 1; i <= 100; i++){
         if(i % 2 != 0){
            printf("%i\n", i);
         soma+=i;

     }
    }
     printf("quantidade de números ímpares de 1 a 100: %i", soma);
    return 0;
    }
    
