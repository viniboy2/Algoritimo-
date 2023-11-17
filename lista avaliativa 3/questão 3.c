#include <stdio.h>
#include <string.h>
#include <ctype.h>

int validarPlaca(char *placa){  
   if (strlen(placa)==8){
      for (int i = 0; i < 3; i++){
        if (!isalpha(placa[i])){
            return 0;
        }
      }
      if (placa[3] != '-' || !isdigit(placa[4]) || !isdigit(placa[5]) || !isdigit(placa[6]) || !isdigit(placa[7])){
        return 0;
      } 
   }
   else if (strlen(placa)==7){
      for (int i = 0; i <3; i++){
         if (!isalpha(placa[i])){
           return 0;
         }
      }
      if (!isalpha(placa[3]) || !isdigit(placa[4]) || !isdigit(placa[5]) || !isdigit(placa[6])){
        return 0;
      }
   }
   else{
      return 0;
   }
   return 1;
}

int validacaoDiaSemana(char * dia){
   char *diasValidos[] = {"SEGUNDA-FEIRA", "TERCA-FEIRA", "QUARTA-FEIRA", "QUINTA-FEIRA", "SEXTA-FEIRA", "SABADO", "DOMINGO"};
   for (int i = 0; i < 7; i++){
     if (strcmp(dia, diasValidos[i]) == 0){
        return 1;
     }
   }
   return 0;
}

int main(){
   char placa[9];
   char diaDaSemana[15];
   int marca;
   scanf("%s",placa);
   scanf("%s",diaDaSemana); 
   if (!validarPlaca(placa)) {
        printf("Placa invalida\n"); 
        marca++;
    }
   if (!validaçãoDiaSemana(diaDaSemana)) {
        printf("Dia da semana invalido\n");
        marca++;
    }
    if(marca>0){
      exit();
    }
    int ultimoDigito = placa[strlen(placa) -  1] - '0';



    return 0;
}