#include <stdio.h>

int main(){
    int senhaNova,senhaCadastrada;

    scanf("%d", &senhaCadastrada);
    printf("senha cadastrada: %.4d\n",senhaCadastrada);
    
    while(1){
        scanf("%d", &senhaNova);
        if(senhaNova == senhaCadastrada){
            printf("senha valida!\n");
            break;
        } else
        {
            printf("senha invalida!\n");
        }
        
        
    }
    return 0;
}
