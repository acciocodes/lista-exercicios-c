//6.	Faça um programa que deverá permitir que o usuário entre com os valores dos elementos de uma matriz quadrada de ordem 4 e possibilite o usuário realizar as seguintes funcionalidades:
//a)	Imprimir todos os elementos da matriz;
//b)	Somar os quadrados de todos os elementos da primeira coluna;
//c)	Somar todos os elementos da terceira linha;
//d)	Somar os elementos da diagonal principal; e
//e)	Somar todos os elementos de índice par da segunda linha.

#include <stdio.h>

int main() {
    int ordem = 4;
    int matriz[ordem][ordem];

    printf("Digite os elementos da matriz %dx%d:\n", ordem, ordem);
    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            printf("Digite o elemento matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nTodos os elementos da matriz:\n");
    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    int somaQuadradosPrimeiraColuna = 0;
    for (int i = 0; i < ordem; i++) {
        somaQuadradosPrimeiraColuna += matriz[i][0] * matriz[i][0];
    }
    printf("\nSoma dos quadrados da primeira coluna: %d\n", somaQuadradosPrimeiraColuna);

    int somaTerceiraLinha = 0;
    for (int j = 0; j < ordem; j++) {
        somaTerceiraLinha += matriz[2][j];
    }
    printf("Soma da terceira linha: %d\n", somaTerceiraLinha);

    int somaDiagonalPrincipal = 0;
    for (int i = 0; i < ordem; i++) {
        somaDiagonalPrincipal += matriz[i][i];
    }
    printf("Soma da diagonal principal: %d\n", somaDiagonalPrincipal);

    int somaElementosIndiceParSegundaLinha = 0;
    for (int j = 0; j < ordem; j += 2) {
        somaElementosIndiceParSegundaLinha += matriz[1][j];
    }
    printf("Soma dos elementos de índice par da segunda linha: %d\n", somaElementosIndiceParSegundaLinha);

    return 0;
}
