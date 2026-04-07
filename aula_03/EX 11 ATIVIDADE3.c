#include <stdio.h>
    int main(){
        
    int num;
    int fatorial = 1;
    
    printf ("Digite um numero:");
     scanf("%i", &num);
     
     for(int i = 1; i <= num; i++){
         fatorial = fatorial * i;
     }
     printf("fatorial = %i", fatorial);
    return 0;
    }
    
