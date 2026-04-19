#include <stdio.h>

int main() {

    char nome[100];
    char endereco[100];
    char telefone[11];

    printf("Digite o nome do cliente: ");
    fgets(nome, 100, stdin);

    printf("Digite o endereco: ");
    fgets(endereco, 100, stdin);

    printf("Digite o telefone: ");
    fgets(telefone, 11, stdin);

    printf("\n--- DADOS DO CLIENTE ---\n");
    printf("Nome: %s", nome);
    printf("Endereco: %s", endereco);
    printf("Telefone: %s", telefone);
    printf("\n------------------------\n");

    return 0;
}
