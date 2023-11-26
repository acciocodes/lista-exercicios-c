//1. Faça um algoritmo que construa uma matriz de nome MAT de 10 linhas e 15 colunas contendo números inteiros. Em seguida escreva a soma dos elementos de cada linha e se a soma dos elementos é par ou ímpar. Por fim, escreva a soma dos elementos de cada coluna e se a soma dos elementos é par ou ímpar.

#include <stdio.h>

int main() {
    const int linhas = 10;
    const int colunas = 15;

    int MAT[linhas][colunas];

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Digite o elemento MAT[%d][%d]: ", i, j);
            scanf("%d", &MAT[i][j]);
        }
    }

    printf("\nSoma dos elementos das linhas:\n");
    for (int i = 0; i < linhas; i++) {
        int somaLinha = 0;
        for (int j = 0; j < colunas; j++) {
            somaLinha += MAT[i][j];
        }
        printf("Linha %d: Soma = %d, %s", i + 1, somaLinha, somaLinha % 2 == 0 ? "Par" : "Ímpar");

        if (somaLinha >= 100) {
            printf(", Soma maior ou igual a 100");
        } else {
            printf(", Soma menor que 100");
        }

        printf("\n");
    }

    printf("\nSoma dos elementos das colunas:\n");
    for (int j = 0; j < colunas; j++) {
        int somaColuna = 0;
        for (int i = 0; i < linhas; i++) {
            somaColuna += MAT[i][j];
        }
        printf("Coluna %d: Soma = %d, %s\n", j + 1, somaColuna, somaColuna % 2 == 0 ? "Par" : "Ímpar");
    }

    return 0;
}
