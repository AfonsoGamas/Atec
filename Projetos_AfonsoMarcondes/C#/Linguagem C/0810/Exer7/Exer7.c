#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Criação da Struct
typedef struct
    {
        char nome[50];
        char apelido[50];
        int matricula;
        float nota;
    }Aluno;

//////////////////////////////////////////////////////////////////////
int main(){
    int escolha;
    int tamanho = 0;
    
    Aluno *alunos = (Aluno *)malloc(sizeof(Aluno));
    
    while(true){
        printf("\n************************************");
        printf("\n*           (Escolhas)             *");
        printf("\n*                                  *");
        printf("\n*   1 - Registrar um Novo Aluno    *");
        printf("\n*   2 - Listar Alunos              *");
        printf("\n*   3 - Parar o Programa           *");
        printf("\n*                                  *");
        printf("\n************************************");

    
        printf("\n\nInsira a sua escolha: ");
        scanf("%d", &escolha);
        
        
    
        switch(escolha)
        { 
            case 1:
                
                printf("\n Aluno %d: \n", tamanho + 1);
                printf("Nome: ");
                scanf("%s", alunos[tamanho].nome);
                printf("Apelido: ");
                scanf("%s", alunos[tamanho].apelido);
                printf("Matricula: ");
                scanf("%d", &alunos[tamanho].matricula);
                printf("Nota: ");
                scanf("%f", &alunos[tamanho].nota);
                
                tamanho += 1;
                alunos = realloc(alunos, tamanho * sizeof(Aluno));
                
                break;
                
            case 2:
                for(int i = 0; i < tamanho; i++)
                {
                    printf("\n\n Aluno %d: \n", i + 1);
                    printf("\nNome: %s", alunos[i].nome);
                    printf("\nApelido: %s", alunos[i].apelido);
                    printf("\nMatricula: %d", alunos[i].matricula);
                    printf("\nNota: %.2f", alunos[i].nota);
                }
                break;
        
            case 3:
                free(alunos);
                printf("\nPrograma encerrado!\n");
                return 0;

            default:
                printf("Escolha inválida!\n");
        }
    }
    free(alunos);
    
    return 0;

}
