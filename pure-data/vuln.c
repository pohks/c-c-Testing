#include <stdio.h>
#include <string.h>

#define MAX_EMAIL_LENGTH 50

struct Usuario {
    char nome[20];
    char email[MAX_EMAIL_LENGTH];
};

void cadastrarUsuario() {
    struct Usuario novoUsuario;

    printf("Digite o nome do usuário: ");
    scanf("%s", novoUsuario.nome);

    printf("Digite o email do usuário: ");
    gets(novoUsuario.email); 

    printf("Usuário cadastrado com sucesso!\n");
    printf("Nome: %s\n", novoUsuario.nome);
    printf("Email: %s\n", novoUsuario.email);
}

int main() {
    cadastrarUsuario();
    return 0;
}
