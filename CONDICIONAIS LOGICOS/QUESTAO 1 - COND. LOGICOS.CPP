//1.	( Switch Case) Suponha que você esteja desenvolvendo o sistema de um hotel que deva exibir mensagens na recepção para diferentes ações dos hóspedes, são elas:
//●	Fazer Check-in
//●	Chamar serviço de quarto
//●	Fazer pedido
//
//Dentro da opção check-in o usuário deverá informar seu nome, cpf, telefone, cidade e estado.
//Dentro da opção chamar o serviço de quarto o usuário deverá informar o seu nome e o número do quarto.
//Dentro da opção fazer pedido o usuário deverá receber um novo menu com opções de comida, bebida e finalizar pedido.


#include <stdio.h>

void fazerCheckIn() {
    char nome[50], cpf[15], telefone[15], cidade[50], estado[3];

    printf("Informe seu nome: ");
    scanf("%s", nome);

    printf("Informe seu CPF: ");
    scanf("%s", cpf);

    printf("Informe seu telefone: ");
    scanf("%s", telefone);

    printf("Informe sua cidade: ");
    scanf("%s", cidade);

    printf("Informe seu estado (sigla): ");
    scanf("%s", estado);

    printf("\nCheck-in realizado com sucesso!\n");
    printf("Nome: %s\n", nome);
    printf("CPF: %s\n", cpf);
    printf("Telefone: %s\n", telefone);
    printf("Cidade: %s\n", cidade);
    printf("Estado: %s\n", estado);
}

// Função para chamar o serviço de quarto
void chamarServicoQuarto() {
    char nome[50];
    int numeroQuarto;

    printf("Informe seu nome: ");
    scanf("%s", nome);

    printf("Informe o numero do quarto: ");
    scanf("%d", &numeroQuarto);

    printf("\nServico de quarto chamado com sucesso!\n");
    printf("Nome: %s\n", nome);
    printf("Numero do Quarto: %d\n", numeroQuarto);
}

// Função principal para fazer pedido
void fazerPedido() {
    int opcaoPedido;

    // Exibindo o menu de opções de pedido
    printf("Escolha uma opcao de pedido:\n");
    printf("1. Comida\n");
    printf("2. Bebida\n");
    printf("3. Finalizar Pedido\n");
    printf("Opção: ");
    scanf("%d", &opcaoPedido);

    switch (opcaoPedido) {
        case 1:
            printf("\nPedido de comida realizado com sucesso!\n");
            break;
        case 2:
            printf("\nPedido de bebida realizado com sucesso!\n");
            break;
        case 3:
            printf("\nPedido finalizado. Obrigado!\n");
            break;
        default:
            printf("\nOpcao invalida.\n");
    }
}

int main() {
    int opcao;

    printf("Escolha uma opcao:\n");
    printf("1. Fazer Check-in\n");
    printf("2. Chamar servico de quarto\n");
    printf("3. Fazer pedido\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            fazerCheckIn();
            break;
        case 2:
            chamarServicoQuarto();
            break;
        case 3:
            fazerPedido();
            break;
        default:
            printf("\nOpcao invalida.\n");
    }

    return 0;
}
