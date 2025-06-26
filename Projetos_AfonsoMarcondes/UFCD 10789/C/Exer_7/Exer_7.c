#include <stdio.h>

int main() {
    char nome[50];
    float prova1, prova2, prova3;
    float peso2 = 0.2, peso3 = 0.3, peso5 = 0.5;
    
    printf("Insira o seu nome: ");
    scanf("%49s", nome);

    printf("\nInsira o a nota da 1ª prova: ");
    scanf("%f", &prova1);
    
    printf("\nInsira o a nota da 2ª prova: ");
    scanf("%f", &prova2);
    
    printf("\nInsira o a nota da 3ª prova: ");
    scanf("%f", &prova3);
    
    
    prova1 = prova1 * peso2;
    prova2 = prova2 * peso3;
    prova3 = prova3 * peso5;
    
    float media = prova1 + prova2 + prova3;
    
    if(media > 5 && media < 11){
        printf("**APROVADO**");
    }
    else if(media < 11){
        printf("**REPROVADO**");
    }
    else{
        printf("**Hove um erro na atribuição das notas do %s**", nome);
    }
    printf("\nA media final do %s é %.2f", nome, media);
    
    return 0;
}
