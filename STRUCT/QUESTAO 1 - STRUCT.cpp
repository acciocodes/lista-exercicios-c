
// 1.	Utilizando struct, faça um programa que permita a entrada de nome, endereço e telefone de 10 pessoas e os imprima em ordem alfabética.

#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[50];
    char endereco[100];
    char telefone[15];
};

int main() {
    struct Pessoa pessoas[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", pessoas[i].nome);

        printf("Digite o endereço da pessoa %d: ", i + 1);
        scanf("%s", pessoas[i].endereco);

        printf("Digite o telefone da pessoa %d: ", i + 1);
        scanf("%s", pessoas[i].telefone);

        printf("\n");
    }

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (strcmp(pessoas[j].nome, pessoas[j + 1].nome) > 0) {
                // Troca
                struct Pessoa temp = pessoas[j];
                pessoas[j] = pessoas[j + 1];
                pessoas[j + 1] = temp;
            }
        }
    }

    printf("\nPessoas em Ordem Alfabética:\n");
    for (int i = 0; i < 10; i++) {
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Endereço: %s\n", pessoas[i].endereco);
        printf("Telefone: %s\n\n", pessoas[i].telefone);
    }

    return 0;
}
