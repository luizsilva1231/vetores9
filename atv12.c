#include <stdio.h>

int main() {
    int n = 5;
    int valores[n];
    int maior, menor, soma = 0;

    // Lê os 5 valores
    for (int i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);

        // Inicializa o maior e o menor com o primeiro valor lido
        if (i == 0) {
            maior = menor = valores[i];
        } else {
            // Atualiza o maior e o menor, se necessário
            if (valores[i] > maior) {
                maior = valores[i];
            }
            if (valores[i] < menor) {
                menor = valores[i];
            }
        }

        soma += valores[i];
    }

    // Calcula a média
    double media = (double)soma / n;

    // Mostra os valores lidos
    printf("Valores lidos: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", valores[i]);
    }

    // Mostra o maior, o menor e a média
    printf("\nMaior valor: %d\nMenor valor: %d\nMédia dos valores: %.2lf\n", maior, menor, media);

    return 0;
}