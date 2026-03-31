#include <stdio.h>
/*5) Cálculo de Desconto
Leia o valor de uma compra:
Se for maior que R$100 → desconto de 10%
Caso contrário → desconto de 5%
Exiba o valor final.*/
    
    //DECLARANDO A VARIÁVEL
    int main (){
        float valor, desconto, total;
        
        //SAÍDA DE DADOS
        printf("Digite o valor da compra:");
        scanf("%f", &valor);
        
        //DEFININDO DESCONTO
        if(valor>100){
            
        printf("seu desconto é de 10%%\n");
        desconto = valor*0.10;
        }else if(valor<100){
            
        printf("seu desconto é 5%%\n");
        desconto = valor*0.05;
        }
        total=valor-desconto;
        printf("Resultado: %.2f\n", total);
        
        return 0;
    }