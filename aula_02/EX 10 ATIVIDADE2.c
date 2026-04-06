#include <stdio.h>
/*10) Cálculo de IMC
Leia peso e altura e calcule o IMC.
Classifique:
Abaixo do peso (< 18.5)
Normal (18.5–24.9)
Sobrepeso (25–29.9)
Obesidade (≥ 30)
    int main(){*/
        //DECLARANDO A VARIÁVEL//
        int main(){
            float peso, altura, imc;
        //SAÍDA DE DADOS//
        printf("Digite seu peso:");
        scanf("%f", &peso);
      
        printf("Digite sua altura");
        scanf("%f", &altura);
        
        //CALCULANDO O IMC//
        imc = peso/(altura*altura);
        
        if(imc<18.5){
            printf("abaixo do peso\n");
        }else if(imc<=24.9){
            printf("normal\n");
        }else if(imc<=29.9){
            printf("sobrepeso");
        }else if(imc>30){
            printf("obesidade");
        }
        return 0;
    }
