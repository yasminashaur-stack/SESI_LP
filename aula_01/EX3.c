#include <stdio.h>

int main(){
    float nota1,nota2,nota3;
    float media = 2.5;
    
    printf("Digite sua nota1:");
    scanf("%f", &nota1);
    printf("Digite sua nota2:");
    scanf("%f", &nota2);
    printf("Digite sua nota3:");
    scanf("%f", &nota3);
    if(media>=7.0){
        printf("aprovado");
    }else if (media <= 2.9){
        printf("\nreprovado   ");
    }else{
        printf("\nrecuperação  ");
    }
        printf("\nmédia: %.1f ", (nota1+nota2+nota3)/3);
    return 0;
}