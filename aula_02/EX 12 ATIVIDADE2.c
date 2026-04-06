#include <stdio.h>
/*'12) Cálculo de Salário com Bônus
Leia o salário:
Se maior que 3000 → bônus de 5%
Caso contrário → bônus de 10%
Exiba o salário final.'
*/
        //DECLARANDO A VARIÁVEL//
        int main(){
            float salario, bonus, salario_final;
        //SAÍDA DE DADOS//
        printf("Digite o seu salario:");
        scanf("%f", &salario);
      
      //CALCULANDO O BONUS//
        if (salario > 3000){
            bonus = salario * 0.05;
        }else if(salario < 3000){
            bonus = salario * 0.10;
        }
        salario_final = salario + bonus;
        printf("salario final: %.2f\n", salario_final);
        return 0;
    }
