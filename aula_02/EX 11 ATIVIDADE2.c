#include <stdio.h>
/*11) Verificação de Múltiplos
Leia dois números e verifique se o primeiro é múltiplo do segundo.
*/
        //DECLARANDO A VARIÁVEL//
        int main(){
            int n1,n2;
        //SAÍDA DE DADOS//
        printf("Digite o valor de n1:");
        scanf("%i", &n1);
      
        printf("Digite o valor de n2:");
        scanf("%i", &n2);
        
        //DECLARANDO SE É MULTIPLO//
        if(n1 % n2 == 0){
            printf("O primeiro número é multiplo do segundo\n");
        }else if(n1 % n2 != 0){
            printf("não é multiplo\n");
        }
        return 0;
    }
