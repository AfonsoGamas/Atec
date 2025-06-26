#include <stdio.h>

struct Pessoa
    {
        char nome[50];
        int idade;
        float altura;
    };

int main(){
    struct Pessoa pessoa1;

    printf("Insira o seu nome: ");
    scanf("%49s", pessoa1.nome);

    printf("Insira a sua idade: ");
    scanf("%d", &pessoa1.idade);
    
    printf("Insira a sua altura: ");
    scanf("%f", &pessoa1.altura);

    printf("\nNome: %s\nIdade: %d Anos\nAltura: %.2fm\n\n", pessoa1.nome, pessoa1.idade, pessoa1.altura);
}