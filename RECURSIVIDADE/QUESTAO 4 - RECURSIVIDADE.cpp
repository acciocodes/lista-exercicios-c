//4.	Crie um programa em C para inverter uma string usando recursão.



#include <stdio.h>
#include <string.h>

void inverterString(char str[], int inicio, int fim) {
    if (inicio < fim) {
        char temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;

        inverterString(str, inicio + 1, fim - 1);
    }
}

int main() {
    char minhaString[100];
    printf("Digite uma string: ");
    fgets(minhaString, sizeof(minhaString), stdin);
    minhaString[strcspn(minhaString, "\n")] = '\0'; 

    inverterString(minhaString, 0, strlen(minhaString) - 1);
    printf("A string invertida e: %s\n", minhaString);

    return 0;
}
