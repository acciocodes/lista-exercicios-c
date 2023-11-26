//3.	Ler um vetor de 12 elementos inteiros e positivos. Criar um segundo vetor da seguinte forma: os elementos de índice par receberão os respectivos elementos divididos por 2; os elementos de índice ímpar receberão os respectivos elementos multiplicados por 3. Imprima os dois vetores.
#include <stdio.h>

int main() {

    int tamanho = 12;

    int vetorOriginal[tamanho];
    float vetorModificado[tamanho];

    printf("Digite 12 elementos inteiros e positivos:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetorOriginal[i]);
    }

    for (int i = 0; i < tamanho; i++) {
        if (i % 2 == 0) {
            vetorModificado[i] = vetorOriginal[i] / 2.0;
        } else {
            vetorModificado[i] = vetorOriginal[i] * 3.0;
        }
    }

    printf("\nVetor Original:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetorOriginal[i]);
    }

    printf("\nVetor Modificado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f ", vetorModificado[i]);
    }

    return 0;
}

