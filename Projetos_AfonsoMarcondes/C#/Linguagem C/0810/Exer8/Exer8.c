#include <stdio.h>

// Struct Endereco
typedef struct {
    char rua[100];
    char numero[5];
    char cidade[20];
} Endereco;

// Struct Pessoa
typedef struct {
    char nome[50];
    int idade;
    int endereco; // índice no array de endereços
} Pessoa;

int main() {
    int escolha;
    int total_pessoas = 0;
    int total_enderecos = 0;

    Pessoa pessoas[100];
    Endereco enderecos[100];

    while (1) {
        printf("\n***********************************************");
        printf("\n*           (Escolhas)                        *");
        printf("\n*   1 - Registrar os Dados de uma Pessoa      *");
        printf("\n*   2 - Preencher o Endereço de uma Pessoa    *");
        printf("\n*   3 - Listar Dados                          *");
        printf("\n*   4 - Parar o Programa                      *");
        printf("\n*                                             *");
        printf("\n***********************************************");

        printf("\n\nInsira a sua escolha: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("\nPessoa %d:\n", total_pessoas + 1);
                printf("Nome: ");
                scanf("%s", pessoas[total_pessoas].nome);
                printf("Idade: ");
                scanf("%d", &pessoas[total_pessoas].idade);

                if (total_enderecos == 0) {
                    printf("Nenhum endereço disponível. Registe primeiro um endereço.\n");
                    break;
                }

                printf("\n\n ** Endereços Disponíveis ** \n");
                for (int i = 0; i < total_enderecos; i++) {
                    printf("\nEndereço Nº %d:\n", i);
                    printf("Rua: %s\n", enderecos[i].rua);
                    printf("Número da Porta: %s\n", enderecos[i].numero);
                    printf("Cidade: %s\n", enderecos[i].cidade);
                }

                printf("\n\nEscolha o número do endereço (0 a %d): ", total_enderecos - 1);
                scanf("%d", &pessoas[total_pessoas].endereco);

                total_pessoas++;
                break;

            case 2:
                printf("\nEndereço %d:\n", total_enderecos + 1);
                printf("Rua/Avenida: ");
                scanf("%s", enderecos[total_enderecos].rua);
                printf("Número da Porta: ");
                scanf("%s", enderecos[total_enderecos].numero);
                printf("Cidade: ");
                scanf("%s", enderecos[total_enderecos].cidade);

                total_enderecos++;
                break;

            case 3:
                printf("\n\n ** Pessoas ** \n");
                for (int i = 0; i < total_pessoas; i++) {
                    printf("\nPessoa %d:\n", i + 1);
                    printf("Nome: %s\n", pessoas[i].nome);
                    printf("Idade: %d\n", pessoas[i].idade);
                    int e = pessoas[i].endereco;
                    if (e >= 0 && e < total_enderecos) {
                        printf("Endereço: %s, %s, %s\n", 
                            enderecos[e].rua,
                            enderecos[e].numero,
                            enderecos[e].cidade);
                    } else {
                        printf("Endereço inválido!\n");
                    }
                }
                break;

            case 4:
                printf("\nPrograma encerrado!\n");
                return 0;

            default:
                printf("Escolha inválida!\n");
        }
    }

    return 0;
}
