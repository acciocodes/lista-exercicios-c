//4.	Faça um programa que faça a multiplicação de duas matrizes.
#include <stdio.h>

int main() {
    int linhas1, colunas1, linhas2, colunas2;

    printf("Digite o número de linhas da primeira matriz: ");
    scanf("%d", &linhas1);
    printf("Digite o número de colunas da primeira matriz: ");
    scanf("%d", &colunas1);

    printf("Digite o número de linhas da segunda matriz: ");
    scanf("%d", &linhas2);
    printf("Digite o número de colunas da segunda matriz: ");
    scanf("%d", &colunas2);

    if (colunas1 != linhas2) {
        printf("Não é possível multiplicar as matrizes. O número de colunas da primeira matriz deve ser igual ao número de linhas da segunda matriz.\n");
        return 1; 
    }

    int matriz1[linhas1][colunas1], matriz2[linhas2][colunas2], resultado[linhas1][colunas2];

    printf("Digite os elementos da primeira matriz %dx%d:\n", linhas1, colunas1);
    for (int i = 0; i < linhas1; i++) {
        for (int j = 0; j < colunas1; j++) {
            printf("Digite o elemento matriz1[%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Digite os elementos da segunda matriz %dx%d:\n", linhas2, colunas2);
    for (int i = 0; i < linhas2; i++) {
        for (int j = 0; j < colunas2; j++) {
            printf("Digite o elemento matriz2[%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    for (int i = 0; i < linhas1; i++) {
        for (int j = 0; j < colunas2; j++) {
            resultado[i][j] = 0;
        }
    }

    for (int i = 0; i < linhas1; i++) {
        for (int j = 0; j < colunas2; j++) {
            for (int k = 0; k < colunas1; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    printf("\nMatriz Resultado:\n");
    for (int i = 0; i < linhas1; i++) {
        for (int j = 0; j < colunas2; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
