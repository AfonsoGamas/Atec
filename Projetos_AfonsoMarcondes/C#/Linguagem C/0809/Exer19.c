#include <stdio.h>
#include <string.h>

// Definir as funções
struct pessoa{
    char nome[50];
    int idade;
    char curso[50];
};

void set_nome(struct pessoa *q, const char n_nome[50]){
    if(q != NULL){
        strcpy(q->nome, n_nome);
    }
}

void set_idade(struct pessoa *w, int n_idade){
    if(w != NULL){
        w->idade = n_idade;
    }
}

void set_curso(struct pessoa *e, const char n_curso[50]){
    if(e != NULL){
        strcpy(e->curso, n_curso);
    }
}

// Main
int main(){

	struct pessoa aluno = {.nome = "Tony", .idade = 16, .curso="PI"};

    set_nome(&aluno, "Afonso");
	set_idade(&aluno, 17);
	set_curso(&aluno, "Programador de Informatica");

	struct pessoa *a = &aluno;
	printf("O nome do aluno e: %s\n", a->nome);
	printf("A Idade do aluno e: %d\n", a->idade);
	printf("O curso do aluno e: %s\n", a->curso);
}
