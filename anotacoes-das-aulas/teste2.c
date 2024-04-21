#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("A soma dos dois números é: %d\n", sum);

    return 0;
}
