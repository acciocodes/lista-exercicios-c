//2.	Faça um programa em C para calcular a soma, multiplicação, subtração e divisão de números dados pelo usuário na entrada utilizando funções recursivas.

#include <stdio.h>

int calcularSoma(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return 1 + calcularSoma(a, b - 1);
    }
}

int calcularMultiplicacao(int a, int b) {
    if (b == 1) {
        return a;
    } else {
        return a + calcularMultiplicacao(a, b - 1);
    }
}

int calcularSubtracao(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return calcularSubtracao(a - 1, b - 1);
    }
}

float calcularDivisao(int a, int b) {
    if (b == 0) {
        printf("Erro: Divisão por zero.\n");
        return -1;
    } else if (a < b) {
        return 0;
    } else {
        return 1 + calcularDivisao(a - b, b);
    }
}

int main() {
    int num1, num2;
    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);

    printf("Soma: %d\n", calcularSoma(num1, num2));
    printf("Multiplicacao: %d\n", calcularMultiplicacao(num1, num2));
    printf("Subtracao: %d\n", calcularSubtracao(num1, num2));
    printf("Divisao: %.2f\n", calcularDivisao(num1, num2));

    return 0;
}
