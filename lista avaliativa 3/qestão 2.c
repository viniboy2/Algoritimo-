#include <stdio.h>
#include <math.h>

double calculaMontanteFimDoMes(int mes, double valorAporte, double taxaJuros) {
    return valorAporte * (1 + taxaJuros) * (((pow(1 + taxaJuros, mes) - 1) / taxaJuros));
}

int main() {
    int numeroMeses;
    double aporteMensal, jurosTaxa;

    scanf("%d", &numeroMeses);
    scanf("%lf", &aporteMensal);
    scanf("%lf", &jurosTaxa);

    for (int i = 1; i <= numeroMeses; i++) {
        double montante = calculaMontanteFimDoMes(i, aporteMensal, jurosTaxa);
        printf("Montante ao fim do mes %d: R$ %.2f\n", i, montante);
    }
    return 0;
}

