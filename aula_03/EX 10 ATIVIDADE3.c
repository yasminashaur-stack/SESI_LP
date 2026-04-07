#include <stdio.h>
    int main(){
        
    int n1, n2;
    
    printf ("Digite o valor de n1:");
     scanf("%i", &n1);
     
      printf ("Digite o valor de n2:");
     scanf("%i", &n2);
     
     for(int i= n1+1; i <= n2; i++){
         printf("%i\n", i);
     }
    return 0;
    }
    
