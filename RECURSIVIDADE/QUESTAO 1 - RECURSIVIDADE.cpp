//1.	Faça um programa que calcule o fatorial de um número informado pelo usuário utilizando função recursiva.

#include <stdio.h>

int calcularFatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * calcularFatorial(n - 1);
    }
}

int main() {
    int numero;
    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d", &numero);

    int resultado = calcularFatorial(numero);
    printf("O fatorial de %d e: %d\n", numero, resultado);

    return 0;
}
