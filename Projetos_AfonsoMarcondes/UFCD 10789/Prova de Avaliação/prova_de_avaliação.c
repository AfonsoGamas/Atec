#include <stdio.h>

typedef struct {
    char nome[50];
    float nota;
    }aluno;

int main() {
    float media;
    aluno turma[10];
    
    for(int i = 0; i < 10; i++)
    {
        printf("** %dº Aluno **\n", i + 1);
        printf("Nome: ");
        scanf("%49s", turma[i].nome);
        printf("Nota: ");
        scanf("%f", &turma[i].nota);
        
        if(turma[i].nota > 20 || turma[i].nota < 0)
        {
            i--;
            printf("\n\n**Nota Invalida**\n\n");
        }
        media += turma[i].nota;
    }
    
    media /= 10;
    
    printf("\n\nA media da turma é %.2f valores.", media);
    
    for(int i = 0; i < 10; i++)
    {
        printf("\n\nO %s tem %.2f valores", turma[i].nome, turma[i].nota);
        
        if(turma[i].nota > media)
        {
            printf("\n**O ele/a está acima da media da turma.**");
        }
        else if(turma[i].nota < media)
        {
            printf("\n**O ele/a está abaixo da media da turma.**");
        }
        else
        {
            printf("\n**O ele/a está na media da turma.**");
        }
    }

    return 0;
}
