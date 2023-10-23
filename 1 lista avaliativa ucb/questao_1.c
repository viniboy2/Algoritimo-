#include <stdio.h>

int main(){
    
    int ano,copa,olimpiada;
    olimpiada = 0;
    copa = 0;
    scanf("%d",&ano);
    if (ano==1916 || ano==1940 || ano==1942 ||ano==1944||ano==1946)
    {
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n",ano);
    }

     else{
       if((ano >= 1896 && ano <= 2020) && (ano % 4 == 0))
     {
        printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d.\n",ano);
        olimpiada=1;
     } 
      if (ano >= 1930 && (ano % 4 == 2))
     {
        printf("A Copa do Mundo de Futebol ocorreu no ano de %d.\n",ano);
        copa=1;
     }
      if(!copa && !olimpiada)
     {
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n",ano);
     }
    }
    return 0;
}