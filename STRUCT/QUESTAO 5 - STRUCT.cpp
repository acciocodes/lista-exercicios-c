//5.	Construa uma estrutura aluno com nome, número de matrícula e curso. Leia do usuário a informação de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na tela.

#include <stdio.h>

struct Aluno {
    char nome[50];
    int matricula;
    char curso[50];
};

int main() {
    struct Aluno alunos[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %49[^\n]", alunos[i].nome);

        printf("Digite a matrícula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);

        getchar();

        printf("Digite o curso do aluno %d: ", i + 1);
        scanf(" %49[^\n]", alunos[i].curso);

        printf("\n");
    }

    printf("\nAlunos cadastrados:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nome: %s\n", alunos[i].nome);
        printf("Matrícula: %d\n", alunos[i].matricula);
        printf("Curso: %s\n\n", alunos[i].curso);
    }

    return 0;
}
