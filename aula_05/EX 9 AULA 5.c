
#include <stdio.h>

int main(){
    int numeros[10];

    for(int i=0; i<10; i++){
        printf("digite um numero:");
        scanf("%i", &numeros[i]);
    }
    for(int i=0; i<10; i++){
        if(numeros[i] < 0){
        numeros[i]=0;
    }
}
    printf("valor final:");
    

    for (int i=0; i<10; i++){
        printf("%i,", numeros[i]);
    }

        
    return 0;
}