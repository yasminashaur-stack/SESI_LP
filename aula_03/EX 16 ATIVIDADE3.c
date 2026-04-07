#include <stdio.h>
    int main(){
        
   int num;
   int soma = 0;
   
   do{
   printf("Digite um número (0 para sair):");
   scanf("%i", &num);
   
   soma+=num; 
   } while(num!=0);
    printf("a soma de todos os numeros e: %i\n", soma);
    return 0;
    }
    
