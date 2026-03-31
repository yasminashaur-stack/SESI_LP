#include <stdio.h>
/*2) Leia um número inteiro e informe se ele é par ou ímpar*/

  //DECLARANDO VARIÁVEL
    int main (){
      int n1;
      
      //SAÍDA DE DADOS
      printf("Digite o valor de n1:");
      
      //ENTRADA DE DADOS
      scanf("%i", &n1);
      
      //DECLARA SE É PAR OU ÍMPAR
      if(n1%2==0){
      printf("é par");
      }else if(n1/2>0){
          printf("é impar");
      }
      
      return 0;
    }