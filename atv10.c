#include<stdio.h>

int main() {
    int numAlunos = 15;
    double notas[numAlunos];
    double soma = 0.0;

    // Lê as notas dos 15 alunos
    for (int i = 0; i < numAlunos; i++) {
           printf("Digite a nota do aluno %d", i + 1);
           scanf("%lf", &notas[i]);
           soma += notas [i];
    }

    // calcule a média geral
    double mediaGeral = soma / numAlunos
    
    // Imprime a média geral
    printf("A media geral das notas dos %d alunos é: %.2lf\n", numAlunos, mediaGeral)

    return 0
}