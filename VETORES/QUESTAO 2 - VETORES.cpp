//2.	Ler um vetor de 10 elementos reais. Crie um segundo vetor, com todos os elementos na ordem inversa, ou seja, o último elemento passará a ser o primeiro, o penúltimo será o segundo e assim por diante. Imprima os dois vetores.
#include <stdio.h>

int main() {
    
    int tamanho = 10;

    float vetorOriginal[tamanho];
    float vetorInvertido[tamanho];

    printf("Digite 10 elementos reais:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%f", &vetorOriginal[i]);
    }

    for (int i = 0; i < tamanho; i++) {
        vetorInvertido[i] = vetorOriginal[tamanho - 1 - i];
    }

    printf("\nVetor Original:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f ", vetorOriginal[i]);
    }
    printf("\n");

    printf("Vetor Invertido:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f ", vetorInvertido[i]);
    }

    return 0;
}
