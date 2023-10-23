#include <stdio.h>

int main(){
   float salario;
   char nivelFuncionario;
   float porcentagem;

   scanf("%c",&nivelFuncionario);
   scanf("%f",&salario);
   switch (nivelFuncionario)
   {
   case 'a':
      porcentagem =+ salario * 0.05;
      printf("R$ %.2f",salario + porcentagem);
    break;
   case 'b':
      porcentagem=+ salario *0.07;
      printf("R$ %.2f",salario + porcentagem);
    break;
   case 'c':
      porcentagem =+ salario * 0.08;
      printf("R$ %.2f",salario + porcentagem);
    break;
   default:
      printf("Nivel inexistente");
    break;
   }
   
    return 0;
}