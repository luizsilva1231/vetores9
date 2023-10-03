#include <stdio.h>

int main() {
    float vetor[10];
    int quantidadeNegativos = 0;
    float somaPositivos = 0;

    // Lê os valores do vetor
    printf("Digite 10 números reais:\n");
    for (int i = 0; i < 10; i++) {
        printf("Vetor[%d]: ", i);
        scanf("%f", &vetor[i]);

        // Verifica se o número é negativo
        if (vetor[i] < 0) {
            quantidadeNegativos++;
        } else {
            // Se for positivo, adiciona-o à soma
            somaPositivos += vetor[i];
        }
    }

    // Imprime a quantidade de números negativos e a soma dos números positivos
    printf("Quantidade de números negativos: %d\n", quantidadeNegativos);
    printf("Soma dos números positivos: %.2f\n", somaPositivos);

    return 0;
}