//2.	(DO WHILE) Construir um algoritmo que calcule a média aritmética de vários valores inteiros positivos. O final da leitura acontecerá quando for lido um valor negativo.


#include <stdio.h>

int main() {
    int numero, soma = 0, contador = 0;

    do {
        printf("Digite um numero positivo (digite um negativo para encerrar): ");
        scanf("%d", &numero);

        if (numero > 0) {
            soma += numero;
            contador++;
        }
    } while (numero >= 0);

    if (contador > 0) {
        float media = (float)soma / contador;
        printf("Media dos numeros positivos: %.2f\n", media);
    } else {
        printf("Nenhum numero positivo foi digitado.\n");
    }

    return 0;
}
