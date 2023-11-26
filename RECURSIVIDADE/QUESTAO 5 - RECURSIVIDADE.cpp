//5.	Escrever uma função recursiva que calcule o valor de a elevado a b.

#include <stdio.h>


double calcularPotencia(double a, int b) {
    if (b == 0) {
        return 1;
    } else if (b % 2 == 0) {
        double temp = calcularPotencia(a, b / 2);
        return temp * temp;
    } else {
        return a * calcularPotencia(a, b - 1);
    }
}

int main() {
    double base;
    int expoente;
    printf("Digite a base e o expoente (separados por espaço): ");
    scanf("%lf %d", &base, &expoente);

    double resultado = calcularPotencia(base, expoente);
    printf("%.2f elevado a %d é: %.2f\n", base, expoente, resultado);

    return 0;
}
