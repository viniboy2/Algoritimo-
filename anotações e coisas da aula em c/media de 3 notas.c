e#include <stdio.h>// atenção tem um switch case para colocar as variaveis 1,2,3 ;
int main()
{ 
    int valor,nota1,nota2,nota3,media;
    printf("digite qual nota voce que colocar primeiro  1,2,3\n");
    scanf("%d",&valor);
     switch ( valor )
{

case 1 :
    printf("digite 3 notas\n");
    printf("digite a nota 1\n"); 
    scanf("%d",&nota1);
while (nota1<0 || nota1>10)
{   printf("digite uma entrada valida\n");
    scanf("%d",&nota1);
   
} 
  break;
  case 2 :
    printf("digite a nota 2\n");
    scanf("%d",&nota2);
while (nota2<0 || nota2>10)
{   printf("digite uma entrada valida\n");
    scanf("%d",&nota2);
}
break;
  case 3:
    printf("digite a nota 3\n");
    scanf("%d",&nota3);
while (nota3<0 || nota3>10)
{   printf("digite uma entrada valida\n");
    scanf("%d",&nota3);
}
  break;
   default :
    printf ("Valor invalido!\n");
}
media=(nota1+nota2+nota3)/3;
    printf(" a media é ");
    printf("%d\n",media);

if(media<7){
    printf("reprovado\n");
}
else{
    printf("aprovado\n");
}
 if( media>=8 && media<10)
{
    printf("parabens\n");
    printf("espetacular\n");
    media++;
}
    printf("%d\n",media);
    return 0;
}





