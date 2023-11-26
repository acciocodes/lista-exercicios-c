//2.	Faça um algoritmo que construa uma matriz 50 por 50 de números reais e depois de construída, colocar o conteúdo de sua diagonal principal dentro de um vetor e depois do vetor montado, imprimir o vetor.
#include <stdio.h>

int main() {
    int tamanho = 50;

    float matriz[tamanho][tamanho];
    float diagonalPrincipal[tamanho];

    printf("Digite os elementos da matriz %dx%d:\n", tamanho, tamanho);
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("Digite o elemento matriz[%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);

            if (i == j) {
                diagonalPrincipal[i] = matriz[i][j];
            }
        }
    }

    printf("\nVetor da Diagonal Principal:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f ", diagonalPrincipal[i]);
    }

    return 0;
}

