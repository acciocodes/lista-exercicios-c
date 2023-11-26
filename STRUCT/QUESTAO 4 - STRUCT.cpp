//4.	Implemente um programa que leia o nome, a idade e o enderec¸o de uma pessoa e Armazene os dados em uma estrutura.

#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
    char endereco[100];
};

int main() {
    struct Pessoa pessoa;

    printf("Digite o nome: ");
    fgets(pessoa.nome, sizeof(pessoa.nome), stdin);

    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade);

    printf("Digite o endereco: ");
    getchar();  
    fgets(pessoa.endereco, sizeof(pessoa.endereco), stdin);

    printf("\nCadastro Realizado:\n");
    printf("Nome: %s", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Endereco: %s", pessoa.endereco);

    return 0;
}
