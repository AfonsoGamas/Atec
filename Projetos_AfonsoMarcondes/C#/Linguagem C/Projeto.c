#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CONTATOS 100
#define MAX_OBSERVACOES 50

typedef struct {
    char nome[50];
    char apelido[50];
    char telefone[20];
    char email[50];
    char observacoes[MAX_OBSERVACOES + 1];
} Contato;

typedef struct {
    Contato contatos[MAX_CONTATOS];
    int total;
} Agenda;

void exibir_menu();
void registrar_contato(Agenda *agenda);
void listar_contatos(const Agenda *agenda);
void procurar_contato(const Agenda *agenda);
void atualizar_contato(Agenda *agenda);
void eliminar_contato(Agenda *agenda);
void exportar_contactos(const Agenda *agenda);
void importar_contactos(Agenda *agenda);
void finalizar_programa(const Agenda *agenda);

int main() {
    Agenda agenda;
    agenda.total = 0;
    char comando[10];

    while (1) {
        exibir_menu();
        printf("Insira a Sua Escolha: ");
        scanf("%s", comando);

        if (strcasecmp(comando, "RC") == 0) {
            registrar_contato(&agenda);
        } else if (strcasecmp(comando, "PC") == 0) {
            procurar_contato(&agenda);
        } else if (strcasecmp(comando, "LC") == 0) {
            listar_contatos(&agenda);
        } else if (strcasecmp(comando, "AC") == 0) {
            atualizar_contato(&agenda);
        } else if (strcasecmp(comando, "EC") == 0) {
            eliminar_contato(&agenda);
        } else if (strcasecmp(comando, "EXPC") == 0) {
            exportar_contactos(&agenda);
        } else if (strcasecmp(comando, "IMPC") == 0) {
            importar_contactos(&agenda);
        } else if (strcasecmp(comando, "XXX") == 0) {
            finalizar_programa(&agenda);
            break;
        } else {
            printf("Comando inválido. Tente novamente.\n");
        }
    }
    return 0;
}

void exibir_menu() {
    printf("\nComandos disponíveis:\n");
    printf(" - RC   - Registrar Contactos - <Nome> <Apelido> <Telefone> <Email> <Observacoes>\n");
    printf(" - PC   - Procurar Contactos  - <Nome>\n");
    printf(" - LC   - Listar Contactos\n");
    printf(" - AC   - Atualizar Contacto  - <Nome>\n");
    printf(" - EC   - Eliminar Contacto   - <Nome>\n");
    printf(" - EXPC - Exportar Contactos\n");
    printf(" - IMPC - Importar Contactos\n");
    printf(" - XXX  - Sair\n\n");
}

void registrar_contato(Agenda *agenda) {
    if (agenda->total >= MAX_CONTATOS) {
        printf("Agenda cheia. Não é possível adicionar mais contactos.\n");
        return;
    }

    Contato novo;
    scanf(" %49s %49s %19s %49s %[^\n]",
          novo.nome,
          novo.apelido,
          novo.telefone,
          novo.email,
          novo.observacoes);

    novo.observacoes[MAX_OBSERVACOES] = '\0';

    for (int i = 0; i < agenda->total; i++) {
        if (strcasecmp(agenda->contatos[i].nome, novo.nome) == 0) {
            printf("Contacto existente com o número %d\n", i + 1);
            return;
        }
    }

    agenda->contatos[agenda->total++] = novo;
    printf("Contacto registado com sucesso\n");
}

void procurar_contato(const Agenda *agenda) {
    char nome[50];
    scanf(" %49s", nome);

    for (int i = 0; i < agenda->total; i++) {
        if (strcasecmp(agenda->contatos[i].nome, nome) == 0) {
            printf("Nome: %s\n", agenda->contatos[i].nome);
            printf("Apelido: %s\n", agenda->contatos[i].apelido);
            printf("Telefone: %s\n", agenda->contatos[i].telefone);
            printf("Email: %s\n", agenda->contatos[i].email);
            printf("Observacoes: %s\n", agenda->contatos[i].observacoes);
            return;
        }
    }

    printf("Contacto inexistente.\n");
}

void listar_contatos(const Agenda *agenda) {
    if (agenda->total == 0) {
        printf("Agenda sem contactos.\n");
        return;
    }

    for (int i = 0; i < agenda->total; i++) {
        printf("[%d] Nome: %s\n", i + 1, agenda->contatos[i].nome);
        printf("    Apelido: %s\n", agenda->contatos[i].apelido);
        printf("    Telefone: %s\n", agenda->contatos[i].telefone);
        printf("    Email: %s\n", agenda->contatos[i].email);
        printf("    Observacoes: %s\n", agenda->contatos[i].observacoes);
    }
}

void atualizar_contato(Agenda *agenda) {
    char nome[50];
    scanf(" %49s", nome);

    for (int i = 0; i < agenda->total; i++) {
        if (strcasecmp(agenda->contatos[i].nome, nome) == 0) {
            int opcao;
            do {
                printf("\n1 - Apelido\n2 - Telefone\n3 - Email\n4 - Observacoes\n5 - Sair\nOpcao: ");
                scanf("%d", &opcao);

                switch (opcao) {
                    case 1:
                        printf("Novo apelido: ");
                        scanf(" %49s", agenda->contatos[i].apelido);
                        printf("Contacto atualizado com sucesso\n");
                        break;
                    case 2:
                        printf("Novo telefone: ");
                        scanf(" %19s", agenda->contatos[i].telefone);
                        printf("Contacto atualizado com sucesso\n");
                        break;
                    case 3:
                        printf("Novo email: ");
                        scanf(" %49s", agenda->contatos[i].email);
                        printf("Contacto atualizado com sucesso\n");
                        break;
                    case 4:
                        printf("Novas observacoes (máximo %d): ", MAX_OBSERVACOES);
                        scanf(" %50[^\n]", agenda->contatos[i].observacoes);
                        agenda->contatos[i].observacoes[MAX_OBSERVACOES] = '\0';
                        printf("Contacto atualizado com sucesso\n");
                        break;
                    case 5:
                        printf("A sair do menu de atualização...\n");
                        break;
                    default:
                        printf("Opcao inválida.\n");
                }

            } while (opcao != 5);
            return;
        }
    }

    printf("Contacto inexistente.\n");
}

void eliminar_contato(Agenda *agenda) {
    char nome[50];
    scanf(" %49s", nome);

    for (int i = 0; i < agenda->total; i++) {
        if (strcasecmp(agenda->contatos[i].nome, nome) == 0) {
            for (int j = i; j < agenda->total - 1; j++) {
                agenda->contatos[j] = agenda->contatos[j + 1];
            }
            agenda->total--;
            printf("Contacto eliminado com sucesso\n");
            return;
        }
    }

    printf("Contacto não encontrado\n");
}

void exportar_contactos(const Agenda *agenda) {
    char path[100];
    const char *userProfile = getenv("USERPROFILE");
    if (!userProfile) {
        printf("Não foi possível encontrar a pasta do utilizador.\n");
        return;
    }
    snprintf(path, sizeof(path), "%s/Desktop/Contactos.txt", userProfile);
    FILE *f = fopen(path, "w");

    if (!f) {
        printf("Erro ao criar ficheiro!\n");
        return;
    }

    for (int i = 0; i < agenda->total; i++) {
        fprintf(f, "%s;%s;%s;%s;%s\n",
                agenda->contatos[i].nome,
                agenda->contatos[i].apelido,
                agenda->contatos[i].telefone,
                agenda->contatos[i].email,
                agenda->contatos[i].observacoes);
    }

    fclose(f);
    printf("Exportados %d contactos para: %s\n", agenda->total, path);
}

void importar_contactos(Agenda *agenda) {
    char path[100];
    const char *userProfile = getenv("USERPROFILE");
    if (!userProfile) {
        printf("Não foi possível encontrar a pasta do utilizador.\n");
        return;
    }
    snprintf(path, sizeof(path), "%s/Desktop/Contactos.txt", userProfile);
    FILE *f = fopen(path, "r");

    if (!f) {
        printf("Erro ao abrir ficheiro!\n");
        return;
    }

    int importados = 0;
    while (agenda->total < MAX_CONTATOS &&
           fscanf(f, " %49[^;];%49[^;];%19[^;];%49[^;];%50[^\n]\n",
                  agenda->contatos[agenda->total].nome,
                  agenda->contatos[agenda->total].apelido,
                  agenda->contatos[agenda->total].telefone,
                  agenda->contatos[agenda->total].email,
                  agenda->contatos[agenda->total].observacoes) == 5) {
        importados++;
        agenda->total++;
    }

    fclose(f);
    printf("Foram importados %d contactos\n", importados);
}

void finalizar_programa(const Agenda *agenda) {
    printf("A guardar a agenda...\n");
    printf("Sayonara!\n");
}
