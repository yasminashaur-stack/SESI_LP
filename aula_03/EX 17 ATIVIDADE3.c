#include <stdio.h>
    int main(){
        
   int num;
   int contador = 0;
   
   printf("Digite um número (digite um n° negativo para sair):");
   scanf("%i", &num);
   
    while(num >=0){
   contador++; 
   
    printf("Digite um número (digite um n° negativo para sair):");
   scanf("%i", &num);
    }
    printf("total de números digitados: %i\n", contador);
    return 0;

    }
    
