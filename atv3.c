#include<stdio.h>

main(){

    int vetorA[10];
    int vetorB[10];


    for(int i = 0; i < 10; i++){
        printf("Digite um numero");
        scanf("%d", &vetorA[i]);
    }

    for(int i= 0; i < 10; i++){
        vetorB[i] - vetorA[i] * vetorA[i];
        vetorB[i] = pow(vetorA[i], 2);
        //vetorB[i] = pow(vetorA[i], 2):
        //mostrar os valores de vetorA
        printf("\n%d", vetorA[i], vetorB[i]);
    }
}