//7.	Dados dois vetores de tamanho N, faça uma função que diga se os mesmos possuem conteúdo igual.

#include <stdio.h>

int saoIguais(int *vetor1, int *vetor2, int tamanho);

int main() {
    int tamanho;

    printf("Digite a quantidade de números: ");
    scanf("%d", &tamanho);

    int vetor1[tamanho];
    int vetor2[tamanho];

    printf("Digite os números do primeiro vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    printf("Digite os números do segundo vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    if (saoIguais(vetor1, vetor2, tamanho)) {
        printf("\nOs vetores têm conteúdo igual.\n");
    } else {
        printf("\nOs vetores não têm conteúdo igual.\n");
    }

    return 0;
}

int saoIguais(int *vetor1, int *vetor2, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor1[i] != vetor2[i]) {
            return 0; // Vetores são diferentes
        }
    }
    return 1; // Vetores são iguais
}
