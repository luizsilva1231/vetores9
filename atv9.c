#include<stdio.h>

int main() {
    int valores[6];

    printf ("Digite 6 valores inteiros pares:\n");

    // Lê os valores e armazena no array
    for (int i = 0; i < 6; i++) {
        do {
            printf("Valor %d: ", i + 1);
            scanf("%d", &valores[i]);
            if (valores[i] % 2 != 0); {
              printf("por favor, digite um numero par. \n");
        }
     } while (valores[i] % 2 !=0);
}
   // Mostrar os valores na ordem inversa
   printf("Valores na ordem inversa: \n");
   for(int i = 5; i >=0; i--){
    printf("%d\n", valores[i]);
   }
   return 0

}