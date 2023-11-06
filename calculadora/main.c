#include <stdio.h> //vamos criar uma calculadora %d e para int %f e para float
#include  <math.h>
int main()
{ 
    int valor, sim=1 ;
float numero1,numero2,valor2 ;
  
while(sim==1) 
{
 printf("digite qual operação você deseja fazer 1 para multiplicação 2 para divisão\n 3 para soma 4 para subitação 5 para raiz quadrada digite 0 para sair do loop \n");
 scanf("%d",&valor);

  switch ( valor )
{  

 case 0 :
 break;
  case 1:
   printf("digite o primeiro numero que deseja multiplicar\n");
 scanf("%f",&numero1);
printf("digite o segundo numero que deseja multiplicar\n");
 scanf("%f",&numero2);
 valor2=numero1*numero2;
printf("%f\n",valor2);
 printf("deseja fazer mais uma operação digite 1 ?\n");
  scanf("%d",&sim);
break;

case 2:
printf("digite o primeiro numero que deseja dividir\n");
 scanf("%f",&numero1);
printf("digite o segundo numero que desejadividir\n");
 scanf("%f",&numero2);
valor2=numero1/numero2;
printf("%f\n",valor2);
printf("deseja fazer mais uma operação digite 1  ?\n");
  scanf("%d",&sim);

break;
    
case 3:
printf("digite o primeiro numero que deseja somar\n");
 scanf("%f",&numero1);
printf("digite o segundo numero que deseja somar \n");
 scanf("%f",&numero2);
valor2=numero1+numero2;
printf("%f\n",valor2);
printf("deseja fazer mais uma operação  ?\n");
  scanf("%d",&sim);

break;
   
case 4:
printf("digite o primeiro numero que deseja subitrair\n");
 scanf("%f",&numero1);
printf("digite o segundo numero que deseja subtrair \n");
 scanf("%f",&numero2);
valor2=numero1+numero2;
printf("%f\n",valor2);
printf("deseja fazer mais uma operação ?\n");
  scanf("%d",&sim);

break;

case 5:
printf("digite o numero que a raiz quadrada \n");
 scanf("%f",&numero1);
 printf("Square root of %lf é %lf\n", numero1, sqrt(numero1) );
printf("deseja fazer mais uma operação \n");
  scanf("%d",&sim);

break;
}
if (valor =!1,2,3,4,5,6)
{
    
    
}

    return 0;
    
}
}
