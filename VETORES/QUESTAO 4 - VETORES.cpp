//4.	Ler um vetor com 10 nomes de pessoas, após pedir que o usuário digite um nome qualquer de pessoa. Escrever a mensagem “ACHEI”, se o nome estiver armazenado no vetor C ou “NÃO ACHEI” caso contrário.

#include <stdio.h>
#include <string.h>

int main() {
    const int tamanho = 10;
    char vetorNomes[tamanho][50] = {"Jessica", "Karoline", "Charlotte", "Amora", "Cafe", "Booth", "Mauro", "Magno", "Junior"};
    char nomeBusca[50];

    printf("Digite um nome para buscar: ");
    scanf("%s", nomeBusca);

    int encontrado = 0;

    for (int i = 0; i < tamanho; i++) {
        if (strcmp(vetorNomes[i], nomeBusca) == 0) {
            encontrado = 1;
            break;
        }
    }

    if (encontrado) {
        printf("ACHEI\n");
    } else {
        printf("NAO ACHEI\n");
    }

    return 0;
}

