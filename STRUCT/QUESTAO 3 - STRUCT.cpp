//3.	Escreva um trecho de código para fazer a criação dos novos tipos de dados conforme solicitado abaixo:
//•	Horario: composto de hora, minutos e segundos.
//•	Data: composto de dia, mês e ano.
//•	Compromisso: composto de uma data, horário e texto que descreve o compromisso.

#include <stdio.h>

struct Horario {
    int hora;
    int minutos;
    int segundos;
};

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Compromisso {
    struct Data data;
    struct Horario hora;
    char text[100];
};

int main() {
    struct Compromisso compromisso;

    printf("\n\n**** Registre um compromisso ****\n\n");

    printf("-- Anotacao sobre o Compromisso --\n:>");
    fgets(compromisso.text, 99, stdin);

    printf("-- Data do compromisso--\n");
    printf("-- Dia --\n:>");
    scanf("%d", &compromisso.data.dia);

    printf("-- Mes --\n:>");
    scanf("%d", &compromisso.data.mes);

    printf("-- Ano --\n:>");
    scanf("%d", &compromisso.data.ano);

    printf("\n\n-*- O compromisso foi criado para o dia %d/%d/%d\n", compromisso.data.dia, compromisso.data.mes, compromisso.data.ano);
    printf("-*- Anotacao: %s\n", compromisso.text);

    return 0;
}
