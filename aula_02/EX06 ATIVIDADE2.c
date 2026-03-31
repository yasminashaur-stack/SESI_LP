#include <stdio.h>
/*6) Ano Bissexto
Leia um ano e informe se ele é bissexto ou não.*/

    //DECLARANDO AS VARIÁVEIS
    int main (){
        int ano;
        
        //SAÍDA DE DADOS
        printf("Digite um/o ano:");
        scanf("%i", &ano);
        
        //VERIFICAÇÃO DO ANO
        if(ano % 4 == 0){
            printf("Esse ano é bissexto");
        }else if(ano % 400 == 0){
            printf("Esse ano é bissexto");
        }else if(ano % 400>0){
            printf("Não é um ano bissexto");
        }else if(ano % 4>0){
            printf("Não é um ano bissexto");
        }
        return 0;
    }