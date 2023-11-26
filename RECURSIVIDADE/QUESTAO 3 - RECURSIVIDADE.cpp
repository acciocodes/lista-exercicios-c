//3.	Crie um programa em Linguagem C que conte os dígitos de um determinado número usando recursão, por exemplo, se o usuário inserir o número 177, a saída esperada deve ser: O número digitado possui 3 dígitos.
#include <stdio.h>

int contarDigitos(int n) {
    if (n == 0) {
        return 0;
    } else {
        return 1 + contarDigitos(n / 10);
    }
}

int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    int resultado = contarDigitos(numero);
    printf("O numero digitado possui %d digitos.\n", resultado);

    return 0;