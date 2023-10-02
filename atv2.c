#include<stdio.h>

int main(){
    int valores [6]; // Declarar um array para armazenar os valores
    int i;

    // Lê os 6 valores inteiros
    for (i= 0; i < 6; i++) {
        printf("Digite o Valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    } 

    // Mostrar os valores lidos na tela
    printf("Valores lidos: ");
    for (i = 0; i < 6; i++) {
        printf("%d", valores[i]);
    }
    printf("\n");

    return 0;
}