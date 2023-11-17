#include <stdio.h>

int main() {
    int forcasTimeA[11] = {0}, forcasTimeB[11] = {0};
    char nomeTimeA[31], nomeTimeB[31];
    char nomeJogador[31], posicaoJogador;
    int forcaJogador;
    
    float calculaForcaPonderada(int forcas[]) {
    return (8 * forcas[0] + 10 * (forcas[1] + forcas[2]) + 5 * (forcas[3] + forcas[4]) + 8 * (forcas[5] + forcas[6]) + 11 * (forcas[7] + forcas[8]) + 12 * (forcas[9] + forcas[10])) / 100.0;
}
    scanf(" %30[^\n]", nomeTimeA);
    for (int i = 0; i < 11; i++) {
        scanf(" %30[^;]; %c; %d", nomeJogador, &posicaoJogador, &forcaJogador);

        int posicao = (posicaoJogador == 'L') ? (forcasTimeA[1] == 0) ? 1 : 2 : 
        (posicaoJogador == 'Z') ? (forcasTimeA[3] == 0) ? 3 : 4 : 
        (posicaoJogador == 'V') ? (forcasTimeA[5] == 0) ? 5 : 6 : 
        (posicaoJogador == 'M') ? (forcasTimeA[7] == 0) ? 7 : 8 : 
        (posicaoJogador == 'A') ? (forcasTimeA[9] == 0) ? 9 : 10 : 0;

        if (forcasTimeA[posicao] == 0)
            forcasTimeA[posicao] = forcaJogador;
    }

    scanf(" %30[^\n]", nomeTimeB);
    for (int i = 0; i < 11; i++) {
        scanf(" %30[^;]; %c; %d", nomeJogador, &posicaoJogador, &forcaJogador);

        int posicao = (posicaoJogador == 'L') ? (forcasTimeB[1] == 0) ? 1 : 2 : 
        (posicaoJogador == 'Z') ? (forcasTimeB[3] == 0) ? 3 : 4 : 
        (posicaoJogador == 'V') ? (forcasTimeB[5] == 0) ? 5 : 6 : 
        (posicaoJogador == 'M') ? (forcasTimeB[7] == 0) ? 7 : 8 : 
        (posicaoJogador == 'A') ? (forcasTimeB[9] == 0) ? 9 : 10 : 0;

        if (forcasTimeB[posicao] == 0)
            forcasTimeB[posicao] = forcaJogador;
    }

    float forcaTimeA = calculaForcaPonderada(forcasTimeA);
    float forcaTimeB = calculaForcaPonderada(forcasTimeB);

    printf("%s: %.2f de forca\n%s: %.2f de forca\n", nomeTimeA, forcaTimeA, nomeTimeB, forcaTimeB);

    if (forcaTimeA > forcaTimeB)
        printf("%s eh mais forte\n", nomeTimeA);
    else if (forcaTimeB > forcaTimeA)
        printf("%s eh mais forte\n", nomeTimeB);
    else
        printf("Os times têm a mesma forca\n");

    return 0;
}