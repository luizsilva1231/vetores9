#include <stdio.h>

int main() {
    int tamanho = 10;
    int vetor[tamanho];
    int maior, posicao;

    // Lê os 10 números inteiros e armazena no vetor
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);

        // Inicializa o maior com o primeiro valor lido
        if (i == 0) {
            maior = vetor[i];
            posicao = i;
        } else {
            // Atualiza o maior e a posição, se necessário
            if (vetor[i] > maior) {
                maior = vetor[i];
                posicao = i;
            }
        }
    }

    // Imprime o vetor
    printf("Vetor lido: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    // Imprime o maior elemento e a posição
    printf("\nMaior elemento: %d\nPosição: %d\n", maior, posicao);

    return 0;
}