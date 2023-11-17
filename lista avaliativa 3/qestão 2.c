#include <stdio.h>
#include <math.h>

double calculaMontanteFimDoMes(int meses, double aporte,double juros){

   return aporte * (((pow(1 + juros, meses) - 1) / juros));
}


int main(){
   int num_meses,i;
   double aporte_mensal, taxa_juros;
   scanf("%d",&num_meses);
     i==num_meses;
   for (int i = 1; i <= num_meses; i++)
   {
      scanf("%lf",&aporte_mensal);
      scanf("%lf",&taxa_juros);
      double montante= calculaMontanteFimDoMes(num_meses, aporte_mensal, taxa_juros);
      printf("Montante ao fim do mes %d: R$%.2lf\n",i,montante);
   }


    return 0;
}