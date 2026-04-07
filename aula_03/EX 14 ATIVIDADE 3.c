#include <stdio.h>
    int main(){
        
   int num;
   
   printf("Digite um número:");
   scanf("%i", &num);
   
   printf("Contagem regressiva:\n");
     for(int i = num; i >= 0; i--){
            printf("%i\n", i);
     }
    return 0;
    }
    
