//3.	Faça um programa que gere uma matriz transposta (Matriz transposta é toda a matriz onde são trocadas as linhas pelas colunas, ou vice-versa).
#include <stdio.h>

int main() {
    int linhas = 3;
    int colunas = 4;

    int matriz[linhas][colunas];

    printf("Digite os elementos da matriz %dx%d:\n", linhas, colunas);
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Digite o elemento matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    int transposta[colunas][linhas];
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }

    printf("\nMatriz Transposta:\n");
    for (int i = 0; i < colunas; i++) {
        for (int j = 0; j < linhas; j++) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}

