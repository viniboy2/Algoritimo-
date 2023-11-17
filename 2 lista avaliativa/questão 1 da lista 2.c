##include <stdio.h>

int main(){
    int num = 10;
    int valores[10];
    int conjunto_novo[10];
    for (int i = 0; i < num; i++) {
        scanf("%d", &valores[i]);
    }
    while (num > 1)
    {
         for (int i = 0; i < num; i++) {
            printf("%d", valores[i]);
            
            if (i < num - 1) {
                printf(" ");
             }
         }
         printf("\n");
         for (int i = 0; i < num - 1; i++)
         {
            conjunto_novo[i] = valores[i] + valores[i+1];
         }
         num--;
         for (int i = 0; i < num; i++)
         {
            valores[i] = conjunto_novo[i];
         }
         
    }
    printf("%d\n", valores[0]);
    


    return 0;
}
