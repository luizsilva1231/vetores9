#include <stdio.h>

int main() {
    int valores[5];
    int maior, menor;
    int posicaoMaior, posicaoMenor;

    // Lê os valores
    printf("Digite 5 valores:\n");
    for (int i = 0; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);

        // Inicializa maior e menor com o primeiro valor
        if (i == 0) {
            maior = valores[i];
            menor = valores[i];
            posicaoMaior = i;
            posicaoMenor = i;
        } else {
            // Atualiza o maior e o menor se necessário
            if (valores[i] > maior) {
                maior = valores[i];
                posicaoMaior = i;
            }
            if (valores[i] < menor) {
                menor = valores[i];
                posicaoMenor = i;
            }
        }
    }

    // Imprime a posição do maior e do menor valor
    printf("O maior valor (%d) está na posição %d.\n", maior, posicaoMaior);
    printf("O menor valor (%d) está na posição %d.\n", menor, posicaoMenor);

    return 0;
}