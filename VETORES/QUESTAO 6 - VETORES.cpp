//6.	Utilizando vetores, crie um programa que organize uma quantidade qualquer de números inteiros fornecidos pelo usuário da seguinte forma: primeiro os números pares em ordem crescente e depois os números ímpares em ordem decrescente.
 
#include <stdio.h>

void organizar_numeros(int numeros[], int tamanho) {
    // Separa os números pares e ímpares
    int numeros_pares[tamanho];
    int numeros_impares[tamanho];
    int num_pares = 0;
    int num_impares = 0;

    for (int i = 0; i < tamanho; i++) {
        if (numeros[i] % 2 == 0) {
            numeros_pares[num_pares] = numeros[i];
            num_pares++;
        } else {
            numeros_impares[num_impares] = numeros[i];
            num_impares++;
        }
    }

    // Organiza os números pares em ordem crescente
    for (int i = 0; i < num_pares - 1; i++) {
        for (int j = i + 1; j < num_pares; j++) {
            if (numeros_pares[i] > numeros_pares[j]) {
                int temp = numeros_pares[i];
                numeros_pares[i] = numeros_pares[j];
                numeros_pares[j] = temp;
            }
        }
    }

    // Organiza os números ímpares em ordem decrescente
    for (int i = 0; i < num_impares - 1; i++) {
        for (int j = i + 1; j < num_impares; j++) {
            if (numeros_impares[i] < numeros_impares[j]) {
                int temp = numeros_impares[i];
                numeros_impares[i] = numeros_impares[j];
                numeros_impares[j] = temp;
            }
        }
    }

    // Combina os resultados
    printf("Números organizados:\n");
    for (int i = 0; i < num_pares; i++) {
        printf("%d ", numeros_pares[i]);
    }
    for (int i = 0; i < num_impares; i++) {
        printf("%d ", numeros_impares[i]);
    }
}

int main() {
    int tamanho;
    printf("Digite a quantidade de números: ");
    scanf("%d", &tamanho);

    int numeros[tamanho];
    printf("Digite os números separados por espaço: ");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &numeros[i]);
    }

    organizar_numeros(numeros, tamanho);

    return 0;
}