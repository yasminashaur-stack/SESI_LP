#include <stdio.h>
    int main(){
        
   int idade;
   int soma = 0;
   int contador = 0;
   
   do{
   printf("Digite idades (para sair digite 0):");
   scanf("%i", &idade);
   
   if(idade != 0){
       soma += idade;
       contador++; 
   } 
   
   }while(idade !=0);
        
    if(contador > 0){
    float media = (float)soma / contador;
    
    printf("media das idades: %.2f\n", media);
    } else {
        printf("Nenhuma idade foi digitada\n");
    return 0;
}
    }
    
