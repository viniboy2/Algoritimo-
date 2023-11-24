#include <stdio.h>
#include <math.h>

double calculaMontanteFimDoMes(int mes, double aporte, double juros) {
    return aporte *(1 + juros) * (((pow(1 + juros,mes) - 1)/juros));
}

int main() {
    int num_mese;
    double aportemensal, taxa_juros;

    scanf("%d", &num_mese);
    scanf("%lf", &aportemensal);
    scanf("%lf", &taxa_juros);

    for (int i = 1; i <= num_mese; i++) {
        double montante = calculaMontanteFimDoMes(i, aportemensal, taxa_juros);
        printf("Montante ao fim do mes %d: R$ %.2f\n", i, montante);
    }
    return 0;
}

