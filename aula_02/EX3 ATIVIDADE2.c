#include <stdio.h>
/*3) Maior entre dois números
Leia dois números inteiros e informe qual é o maior ou se são iguais.*/

    //DECLARANDO VARIÁVEL
    int main(){
        int n1, n2;
        
         //SAÍDA DE DADOS
        printf("digite o valor de n1:");
        scanf("%i", &n1);
        
        printf("Digite o valor de n2:");
        scanf("%i", &n2);
        
        //DECLARANDO QUAL NÚMERO É MAIOR
        if(n1>n2){
        printf("%i é maior que %i", n1, n2);
        }else if(n1<n2){
            printf("%i é maior que %i", n1, n2);
        }
       return 0;
        
    }
