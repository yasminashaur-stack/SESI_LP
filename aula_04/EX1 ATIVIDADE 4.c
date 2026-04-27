#include <stdio.h>

int main()
{
    float nota[10], soma=0, media;
    int total_acima_da_media = 0;
    int x=0;
    
    for(int i=0; i < 10; i++){
        //entrada de dados
        printf("\nDigite nota %i:", i+1);
        scanf("%f", &nota[i]);
        
        //soma total de notas
        soma = (soma + nota[i]);
        
       // identifique quantos alunos ficaram acima da média
        
        if(nota[i]>= 7){
        //total_acima_da_media = total_acima_da_media
            total_acima_da_media++;
        }
    }
    media=soma/10;
    printf("\n A média da turma e: %1f", media);
    printf("\nTotal de alunos acima da media: %i", total_acima_da_media);
    
    
    while(x < 10){
        if (nota[x] >= 7){
            printf("\n %i - nota: %.1f", x+1, nota[x]);
        }
        
        x++;
    }
    
    
    return 0;
}