#include <stdio.h>

int main() {
    int vetor[10];
    int contadorPares = 0;

    // Lê os valores do vetor
    printf("Digite os valores do vetor de 10 posições:\n");
    for (int i = 0; i < 10; i++) {
        printf("Vetor[%d]: ", i);
        scanf("%d", &vetor[i]);

        // Verifica se o valor é par e incrementa o contador se for
        if (vetor[i] % 2 == 0) {
            contadorPares++;
        }
    }

    // Imprime a quantidade de valores pares
    printf("O vetor possui %d valores pares.\n", contadorPares);

    return 0;
}