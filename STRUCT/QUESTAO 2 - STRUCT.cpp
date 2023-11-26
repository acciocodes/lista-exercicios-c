//2.	Faça um programa que realize a leitura dos seguintes dados relativos a um conjunto de alunos: Matricula, Nome, Código da Disciplina, Nota1 e Nota2. Considere uma turma de até 10 alunos. Após ler todos os dados digitados, exibir na tela a listagem final dos alunos com as suas respectivas médias finais (use uma média ponderada: Nota1 com peso=1.0 e Nota2 com peso=2.0).

#include <stdio.h>

struct Aluno {
    int matricula;
    char nome[50];
    int codigoDisciplina;
    float nota1;
    float nota2;
    float mediaFinal;
};

int main() {
    struct Aluno alunos[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite a matrícula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);

        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %[^\n]", alunos[i].nome);

        printf("Digite o código da disciplina do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].codigoDisciplina);

        printf("Digite a nota1 do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota1);

        printf("Digite a nota2 do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota2);

        printf("\n");
    }

    printf("\nListagem Final dos Alunos com Médias Finais:\n");
    for (int i = 0; i < 10; i++) {
        alunos[i].mediaFinal = (alunos[i].nota1 + 2 * alunos[i].nota2) / 3;
        printf("Matrícula: %d, Nome: %s, Média Final: %.2f\n", alunos[i].matricula, alunos[i].nome, alunos[i].mediaFinal);
    }

    return 0;
}
