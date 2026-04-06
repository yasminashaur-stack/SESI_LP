#include <stdio.h>
/*9) Número Positivo, Negativo ou Zero
Leia um número e informe se ele é:
Positivo
Negativo
Zero*/
    //DECLARANDO A VARIÁVEL//
    int main(){
        float num;
        
        //SAÍDA DE DADOS//
        printf("Digite um numero:");
        scanf("%f", &num);
        
        //DECLARANDO SE POSITIVO, NEGATIVO OU ZERO//
        if(num>0){
            printf("número positivo");
        }else if(num<0){
            printf("número negativo");
        }else if(num==0){
            printf("número zero");
        }
        return 0;
    }
