//4.	(FOR) Escrever um algoritmo que lê 5 valores para a, um de cada vez, e conta quantos destes valores são negativos, escrevendo esta informação.

#include <stdio.h>

int main() {
    int valor, contadorNegativos = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valor);

        if (valor < 0) {
            contadorNegativos++;
        }
    }

    
    printf("Quantidade de valores negativos: %d\n", contadorNegativos);

    return 0;
}
