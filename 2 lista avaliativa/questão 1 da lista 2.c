#include <stdio.h>

int main(){
    int num1 = 10;
    int valores[10];
    for (int i = 0; i < num1--; i++) {
        scanf("%d", &valores[i]);
    }
    while (num1 > 1)
    {
         for (int i = 0; i < num1; i++) {
            printf("%d", valores[i]);
            
            if (i < num1 - 1) {
                printf(" ");// ver como fazer isso de forma mais eficiente 
             }
         }
         printf("\n");
         for (int i = 0; i < num1 - 1; i++)
         {
            valores[i] = valores[i] + valores[i+1];
         }
         num1--;
        
    }
    printf("%d\n", valores[0]);
    


    return 0;
}