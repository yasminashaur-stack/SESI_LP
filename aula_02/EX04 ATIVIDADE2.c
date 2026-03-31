#include <stdio.h>
/*4) Verificação de Aprovação
Leia a nota de um aluno (0 a 10).
Informe:
Aprovado (nota >= 7)
Recuperação (nota entre 5 e 6.9)
Reprovado (nota < 5)*/
    //DECLARANDO VARIÁVEL
    int main (){
        float nota;
        
        //SAÍDA DE DADOS
        printf("Digite sua nota:");
        scanf("%f", &nota);
        
        //DECLARANDO A NOTA
        if(nota>=7.0){
            printf("Aprovado");
        }else if(nota>=5){
            printf("Em recuperação");
        }else if(nota<5){
            printf("Reprovado");
            return 0;
        }
    }