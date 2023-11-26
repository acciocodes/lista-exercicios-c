//3.	(WHILE) Em uma eleição presidencial existem quatro candidatos. Os votos são informados através de códigos. Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:
//●	1,2,3,4 = voto para os respectivos candidatos;
//●	5 = voto nulo;
//●	6 = voto em branco;
//
//Elabore um algoritmo que leia o código do candidado em um voto. Calcule e escreva:
//
//●	total de votos para cada candidato;
//●	total de votos nulos;
//●	total de votos em branco;
//
//Como finalizador do conjunto de votos, tem-se o valor 0.

#include <stdio.h>

int main() {
    int codigo, votos[5] = {0}; // Indices 1 a 4 representam os candidatos, 5 representa votos nulos, 6 representa votos em branco

    while (1) {
        // Lendo o codigo dotf("Digite o codigo do candidato (ou 0 para encerrar): ");
        scanf("%d", &codigo);

        if (codigo == 0) {
            break; // Encerra o loop se o codigo for 0
        }

        // Contando os votos conforme a codificacao
        if (codigo >= 1 && codigo <= 6) {
            votos[codigo]++;
        } else {
            printf("Codigo de voto invalido.\n");
        }
    }

    // Imprimindo os resultados
    printf("\nResultados da Eleicao:\n");
    for (int i = 1; i <= 6; i++) {
        if (i <= 4) {
            printf("Candidato %d: %d votos\n", i, votos[i]);
        } else if (i == 5) {
            printf("Votos Nulos: %d\n", votos[i]);
        } else {
            printf("Votos em Branco: %d\n", votos[i]);
        }
    }

    return 0;
}
