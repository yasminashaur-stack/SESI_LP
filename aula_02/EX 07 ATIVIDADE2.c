#include <stdio.h>
/*7) Verificação de Triângulo
Leia três valores e verifique se podem formar um triângulo.
Caso formem, classifique como:
Equilátero
Isósceles
Escaleno*/

    //DECLARANDO AS VARIÁVEIS//
int main(){
    float a,b,c;
    
    //SAÍDA DE DADOS//
    printf("Digite os três lados do triângulo(separados por espaço):");
    scanf("%f %f %f", &a,&b,&c);
    
    //DECLARANDO QUAL É O TRIÂNGULO//
    if(a+b>c && a+c>b && b+c>a){
        printf("forma um triângulo\n");
    }
    if(a==b && b==c){
        printf("triângulo equilátero\n");
    }
    else if(a==b || a==c || b==c){
        printf("Triângulo Isosceles\n");
    }
    else if(a!=b && a!=c && b!=c){
        printf("Triângulo escaleno\n");
    }
    return 0;
}