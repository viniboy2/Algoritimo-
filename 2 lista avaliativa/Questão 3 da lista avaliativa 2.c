#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void preencheMatriz(int tamanho, int matriz[tamanho][tamanho]) {
    // Lê a sequência do usuário
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimeMatriz(int tamanho, int matriz[tamanho][tamanho]) {
    // Imprime a matriz com espaçamento justificado à direita
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void operaMatrizes(char operacao[], int tamanho, int matrizA[tamanho][tamanho], int matrizB[tamanho][tamanho], int resultado[tamanho][tamanho]) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            if (strcmp(operacao, "soma") == 0) {
                resultado[i][j] = matrizA[i][j] + matrizB[i][j];
            } else if (strcmp(operacao, "sub") == 0) {
                resultado[i][j] = matrizA[i][j] - matrizB[i][j];
            } else if (strcmp(operacao, "mult") == 0) {
                resultado[i][j] = matrizA[i][j] * matrizB[i][j];
            }
        }
    }
}

int main() {
    int tamanho = 4;
    int matrizA[tamanho][tamanho];
    int matrizB[tamanho][tamanho];
    int resultado[tamanho][tamanho];

    preencheMatriz(tamanho, matrizA);
    preencheMatriz(tamanho, matrizB);

    char operacao[5];
    scanf("%s", operacao);

    operaMatrizes(operacao, tamanho, matrizA, matrizB, resultado);

    imprimeMatriz(tamanho, resultado);

    return 0;
}

