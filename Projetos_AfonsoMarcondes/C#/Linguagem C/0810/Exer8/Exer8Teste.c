#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Criação da Struct
typedef struct
    {
        char rua[100];
        char numero[5];
        char cidade[20];
        
    }Endereco;
    
// Criação da Struct
typedef struct
    {
        char nome[50];
        int idade;
        int endereco;
    
    }Pessoa;

//////////////////////////////////////////////////////////////////////
int main(){
    int total_pessoas = 0;
    int total_enderecos = 0;
    int escolha;
    Endereco enderecos;
    Pessoa pessoas;
    while(true){
        printf("\n***********************************************");
        printf("\n*           (Escolhas)                        *");
        printf("\n*                                             *");
        printf("\n*   1 - Registrar os Dados de uma Pessoa      *");
        printf("\n*   2 - Preencher o Endereço de uma Pessoa    *");
        printf("\n*   3 - Listar Dados                          *");
        printf("\n*   4 - Parar o Programa                      *");
        printf("\n*                                             *");
        printf("\n***********************************************");

    
        printf("\n\nInsira a sua escolha: ");
        scanf("%d", &escolha);
        
        
    
        switch(escolha)
        { 
            case 1:
                printf("\nPessoa %d:\n", total_pessoas + 1);
                printf("Nome: ");
                scanf("%s", pessoas[total_pessoas].nome);
                printf("Idade: ");
                scanf("%d", &pessoas[total_pessoas].idade);

                if (total_enderecos == 0) {
                    printf("Nenhum endereço disponível. Registe um endereço primeiro.\n");
                    break;
                }

                printf("\n\n ** Endereços Disponíveis ** \n");
                for (int i = 0; i < total_enderecos; i++) {
                    printf("\nEndereço Nº %d:\n", i);
                    printf("Rua: %s\n", enderecos[i].rua);
                    printf("Número da Porta: %s\n", enderecos[i].numero);
                    printf("Cidade: %s\n", enderecos[i].cidade);
                }

                printf("Escolha o número do endereço (0 a %d): ", total_enderecos - 1);
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
                for(int i = 0; i < tamanho; i++)
                {
                    printf("\n\n Pessoa %d: \n", i + 1);
                    printf("\nNome: %s", pessoas[i].nome);
                    printf("\nIdade: %d", pessoas[i].idade);
                    printf("\nEndereço: %d", pessoas[i].endereco);
                }
                
                printf("\n\n ** Endereços ** \n");
                for(int i = 0; i < tamanho; i++)
                {
                    printf("\n\n Endereço Nº %d: \n", i + 1);
                    printf("\nRua: %s", enderecos[i].rua);
                    printf("\nNumero da Porta: %d", enderecos[i].numero);
                    printf("\nCidade: %d", enderecos[i].cidade);
                }
                break;
        
            case 4:
                free(Endereco);
                free(Pessoa);
                printf("\nPrograma encerrado!\n");
                return 0;

            default:
                printf("Escolha inválida!\n");
        }
    }
    return 0;
}
