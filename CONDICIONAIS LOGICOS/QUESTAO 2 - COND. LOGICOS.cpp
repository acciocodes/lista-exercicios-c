//2.	(IF) Escreva um programa para ler o número de lados de um polígono regular e a medida do lado (em cm). Calcular e imprimir o	seguinte:
//●	Se o número de lados for igual a 3 escrever TRIÂNGULO e o valor da área.
//●	Se o número de lados for igual a 4 escrever QUADRADO e o valor da sua área.
//●	Se o número de lados for igual a 5 escrever PENTÁGONO.


#include <stdio.h>
#include <math.h>

int main() {
    int numeroLados;
    double medidaLado;

    printf("Digite o numero de lados do poligono regular: ");
    scanf("%d", &numeroLados);

    if (numeroLados == 3) {
        printf("Digite a medida do lado do triangulo (em cm): ");
        scanf("%lf", &medidaLado);

        // Calcular a área do triângulo
        double areaTriangulo = (sqrt(3) / 4) * pow(medidaLado, 2);
        
        // Imprimir o resultado
        printf("TRIANGULO\n");
        printf("Área: %.2f cm²\n", areaTriangulo);
    } else if (numeroLados == 4) {
        // Se for um quadrado, pedir a medida do lado
        printf("Digite a medida do lado do quadrado (em cm): ");
        scanf("%lf", &medidaLado);

        // Calcular a área do quadrado
        double areaQuadrado = pow(medidaLado, 2);

        // Imprimir o resultado
        printf("QUADRADO\n");
        printf("Área: %.2f cm²\n", areaQuadrado);
    } else if (numeroLados == 5) {
        // Se for um pentágono
        printf("PENTAGONO\n");
    } else {
        // Para qualquer outro número de lados
        printf("Poligono nao suportado.\n");
    }

    return 0;
}
