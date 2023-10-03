#include <stdio.h>

int main() {
    int vetor[8];
    int x, y;

    // Lê os valores do vetor
    printf("Digite os valores do vetor de 8 posições:\n");
    for (int i = 0; i < 8; i++) {
        printf("Vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    // Lê os valores de X e Y
    printf("Digite o valor de X (0-7): ");
    scanf("%d", &x);
    printf("Digite o valor de Y (0-7): ");
    scanf("%d", &y);

    // Verifica se os valores de X e Y estão dentro do intervalo válido
    if (x >= 0 && x < 8 && y >= 0 && y < 8) {
        // Calcula e imprime a soma dos valores nas posições X e Y
        int soma = vetor[x] + vetor[y];
        printf("A soma dos valores nas posições %d e %d é: %d\n", x, y, soma);
    } else {
        printf("Valores de X e/ou Y estão fora do intervalo válido (0-7).\n");
    }

    return 0;
}