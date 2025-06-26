#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_CONTACTS 100
#define MAX_OBS_LENGTH 50

typedef struct {
    char nome[50];
    char apelido[50];
    char telefone[20];
    char email[50];
    char observacoes[MAX_OBS_LENGTH];
} Contact;

Contact agenda[MAX_CONTACTS];
int numContacts = 0;

void limparEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void lerString(char *destino, int tamanho, const char *mensagem) {
    printf("%s", mensagem);
    if (fgets(destino, tamanho, stdin)) {
        size_t len = strlen(destino);
        if (len > 0 && destino[len - 1] == '\n') {
            destino[len - 1] = '\0'; // Remove o '\n'
        } else {
            limparEntrada(); // Limpa o buffer caso a entrada seja muito longa
        }
    }
}

int procurarContactoPorNome(const char *nome) {
    for (int i = 0; i < numContacts; i++) {
        if (strcmp(agenda[i].nome, nome) == 0) {
            return i;
        }
    }
    return -1;
}

void adicionarContacto() {
    if (numContacts >= MAX_CONTACTS) {
        printf("Agenda cheia, não é possível adicionar mais contactos.\n");
        return;
    }

    Contact novo;
    lerString(novo.nome, sizeof(novo.nome), "Nome: ");
    lerString(novo.apelido, sizeof(novo.apelido), "Apelido: ");
    lerString(novo.telefone, sizeof(novo.telefone), "Telefone/Telemóvel: ");
    lerString(novo.email, sizeof(novo.email), "Email: ");
    lerString(novo.observacoes, sizeof(novo.observacoes), "Observações: ");

    int index = procurarContactoPorNome(novo.nome);
    if (index != -1) {
        printf("Contacto existente com o número %d\n", index + 1);
        return;
    }

    agenda[numContacts++] = novo;
    printf("Contacto registado com sucesso.\n");
}

void procurarContacto() {
    char nome[50];
    lerString(nome, sizeof(nome), "Nome do contacto: ");

    int index = procurarContactoPorNome(nome);
    if (index == -1) {
        printf("Contacto inexistente.\n");
    } else {
        printf("Nome: %s\n", agenda[index].nome);
        printf("Apelido: %s\n", agenda[index].apelido);
        printf("Telefone: %s\n", agenda[index].telefone);
        printf("Email: %s\n", agenda[index].email);
        printf("Observações: %s\n", agenda[index].observacoes);
    }
}

void listarContactos() {
    if (numContacts == 0) {
        printf("Agenda sem contactos.\n");
        return;
    }

    for (int i = 0; i < numContacts; i++) {
        printf("\nContacto %d:\n", i + 1);
        printf("Nome: %s\n", agenda[i].nome);
        printf("Apelido: %s\n", agenda[i].apelido);
        printf("Telefone: %s\n", agenda[i].telefone);
        printf("Email: %s\n", agenda[i].email);
        printf("Observações: %s\n", agenda[i].observacoes);
    }
}

void atualizarContacto() {
    char nome[50];
    lerString(nome, sizeof(nome), "Nome do contacto a atualizar: ");

    int index = procurarContactoPorNome(nome);
    if (index == -1) {
        printf("Contacto inexistente.\n");
        return;
    }

    int opcao;
    do {
        printf("\n1 - Apelido\n");
        printf("2 - Telefone\n");
        printf("3 - Email\n");
        printf("4 - Observações\n");
        printf("5 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        limparEntrada();

        switch (opcao) {
            case 1:
                lerString(agenda[index].apelido, sizeof(agenda[index].apelido), "Novo Apelido: ");
                printf("Contacto atualizado com sucesso.\n");
                break;
            case 2:
                lerString(agenda[index].telefone, sizeof(agenda[index].telefone), "Novo Telefone/Telemóvel: ");
                printf("Contacto atualizado com sucesso.\n");
                break;
            case 3:
                lerString(agenda[index].email, sizeof(agenda[index].email), "Novo Email: ");
                printf("Contacto atualizado com sucesso.\n");
                break;
            case 4:
                lerString(agenda[index].observacoes, sizeof(agenda[index].observacoes), "Novas Observações: ");
                printf("Contacto atualizado com sucesso.\n");
                break;
            case 5:
                printf("Saindo do menu de atualização.\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 5);
}

void eliminarContacto() {
    char nome[50];
    lerString(nome, sizeof(nome), "Nome do contacto a eliminar: ");

    int index = procurarContactoPorNome(nome);
    if (index == -1) {
        printf("Contacto não encontrado.\n");
        return;
    }

    for (int i = index; i < numContacts - 1; i++) {
        agenda[i] = agenda[i + 1];
    }
    numContacts--;
    printf("Contacto eliminado com sucesso.\n");
}

void terminarPrograma() {
    printf("A guardar a agenda...\n");
    printf("Sayonara!\n");
}

void mostrarMenu() {
    printf("\nOperações:\n");
    printf("RC - Novo contacto\n");
    printf("PC - Procurar contacto\n");
    printf("LC - Listar contactos\n");
    printf("AC - Atualizar contacto\n");
    printf("EC - Eliminar contacto\n");
    printf("XXX - Terminar o programa\n");
}

int main() {
    char comando[4];

    mostrarMenu();

    while (1) {
        printf("\nDigite um comando: ");
        lerString(comando, sizeof(comando), "");

        if (strcmp(comando, "RC") == 0) {
            adicionarContacto();
        } else if (strcmp(comando, "PC") == 0) {
            procurarContacto();
        } else if (strcmp(comando, "LC") == 0) {
            listarContactos();
        } else if (strcmp(comando, "AC") == 0) {
            atualizarContacto();
        } else if (strcmp(comando, "EC") == 0) {
            eliminarContacto();
        } else if (strcmp(comando, "XXX") == 0) {
            terminarPrograma();
            break;
        } else {
            printf("Comando inválido. Tente novamente.\n");
        }
    }

    return 0;
}
