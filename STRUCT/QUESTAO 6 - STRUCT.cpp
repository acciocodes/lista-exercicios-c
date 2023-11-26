//6.	Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da terceira prova.
//(a)	Permita ao usuário entrar com os dados de 5 alunos.
//(b)	Encontre o aluno com maior nota da primeira prova.
//(c)	Encontre o aluno com maior média geral.
//(d)	Encontre o aluno com menor média geral
//(e)	Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para Aprovação.

#include <stdio.h>
#include <string.h>

struct AlunoCurso {
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
    float media;
    char situacao[15];
};

int main() {
    struct AlunoCurso alunos[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite a matricula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);

        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", alunos[i].nome);

        printf("Digite a nota da primeira prova do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota1);

        printf("Digite a nota da segunda prova do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota2);

        printf("Digite a nota da terceira prova do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota3);

        printf("\n");
    }

    int indiceMaiorNota1 = 0;
    for (int i = 1; i < 5; i++) {
        if (alunos[i].nota1 > alunos[indiceMaiorNota1].nota1) {
            indiceMaiorNota1 = i;
        }
    }

    int indiceMaiorMedia = 0;
    for (int i = 1; i < 5; i++) {
        if (alunos[i].media > alunos[indiceMaiorMedia].media) {
            indiceMaiorMedia = i;
        }
    }

    int indiceMenorMedia = 0;
    for (int i = 1; i < 5; i++) {
        if (alunos[i].media < alunos[indiceMenorMedia].media) {
            indiceMenorMedia = i;
        }
    }

    for (int i = 0; i < 5; i++) {
        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;

        if (alunos[i].media >= 6) {
            strcpy(alunos[i].situacao, "Aprovado");
        } else {
            strcpy(alunos[i].situacao, "Reprovado");
        }
    }

    printf("\nResultados:\n");
    printf("Aluno com maior nota da primeira prova: %s\n", alunos[indiceMaiorNota1].nome);
    printf("Aluno com maior media geral: %s\n", alunos[indiceMaiorMedia].nome);
    printf("Aluno com menor media geral: %s\n", alunos[indiceMenorMedia].nome);

    printf("\nSituacao dos Alunos:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s - %s\n", alunos[i].nome, alunos[i].situacao);
    }

    return 0;
}
