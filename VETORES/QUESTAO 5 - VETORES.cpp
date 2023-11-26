//5.	Faça um programa que leia e monte dois vetores de números inteiros com 20 números cada. Depois de montados gere um terceiro vetor formado pela diferença dos dois vetores lidos, um quarto vetor formado pela soma dos dois vetores lidos e por último um quinto vetor formado pela multiplicação dos dois vetores lidos.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int x[20], y[20];
    int soma[20], diferenca[20], produto[20];

    for (int a = 0; a < 20; a++) {
        x[a] = rand() % 100 + 1;
    }

    for (int i = 0; i < 20; i++) {
        y[i] = rand() % 100 + 1;
    }

    for (int j = 0; j < 20; j++) {
        soma[j] = x[j] + y[j];
        diferenca[j] = x[j] - y[j];
        produto[j] = x[j] * y[j];
    }

    for (int q = 0; q < 20; q++) {
        printf("%d ", soma[q]);
        printf("%d ", diferenca[q]);
        printf("%d\n", produto[q]);
    }

    return 0;
}
