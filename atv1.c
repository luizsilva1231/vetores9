#include <stdio.h>

int main() {
    int A[6];  // Declarando um vetor de 6 elementos
    int soma;  // Variável para armazenar a soma

    // (a) Atribuindo valores ao vetor
    A[0] = 1;
    A[1] = 0;
    A[2] = 5;
    A[3] = -2;
    A[4] = -5;
    A[5] = 7;

    // (b) Calculando a soma dos valores das posições A[0], A[1] e A[5]
    soma = A[0] + A[1] + A[5];

    printf("Soma dos elementos A[0], A[1] e A[5]: %d\n", soma);

    // (c) Modificando o valor na posição A[4]
    A[4] = 100;

    // (d) Mostrando cada valor do vetor A
    printf("Valores do vetor A:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d\n", A[i]);
    }

    return 0;
}