//5.	Faça um programa que faça a soma de duas matrizes.

#include <stdio.h>

int main() {
    int linhas, colunas;

    printf("Digite o número de linhas e colunas das matrizes: ");
    scanf("%d", &linhas);
    colunas = linhas;  


    int matriz1[linhas][colunas], matriz2[linhas][colunas], soma[linhas][colunas];

    printf("Digite os elementos da primeira matriz %dx%d:\n", linhas, colunas);
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Digite o elemento matriz1[%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Digite os elementos da segunda matriz %dx%d:\n", linhas, colunas);
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Digite o elemento matriz2[%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            soma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    printf("\nMatriz Soma:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }

    return 0;
}
