#include <stdio.h>
/*
1) Classificação de Idade
Leia a idade de uma pessoa e informe:
Criança (0–12)
Adolescente (13–17)
Adulto (18–59)
Idoso (60+)
*/
int main(){
    //DECLARANDO VARIÁVEL
    int idade;
    
    //saída de dados
    printf("Digte sua idade:");
    
    //entrada de dados
    scanf("%i", &idade);
    
    //DECLARO SE É (CRIANÇA, ADOLESCENTE, ADULTO OU IDOSO)
    if(idade<=12){
        printf("Criança");
    }else if(idade<=17){
        printf("Adolescente");
    }else if(idade<=59){
        printf("Adulto");
    }else if(idade>=60){
    printf("Idoso");
    }
    
    return 0;
}