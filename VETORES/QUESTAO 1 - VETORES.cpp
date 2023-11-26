//1.	Faça um programa que leia 15 números inteiros e armazene em um vetor. Ao final imprima o vetor armazenado.


#include <stdio.h>

int main() {
    int tamanho = 15;
    int vetor[tamanho];

    printf("Digite 15 numeros inteiros:\n");

    for (int i = 0; i < tamanho; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nVetor armazenado:\n");
    
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}


