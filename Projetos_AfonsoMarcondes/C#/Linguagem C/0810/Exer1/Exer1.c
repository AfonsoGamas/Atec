#include <stdio.h>

int main(){
    int idades[] = { 23, 43, 12, 89, 2 };
    char *nomes[] = {"Andre", "Franco","Maria", "Jose", "Bela"};

    int tamanho = (sizeof(*nomes) / sizeof(*nomes[0])) + 1;

    for(int i = 0; i < tamanho; i++){
        printf("A/O %s tem %d anos.\n", nomes[i], idades[i]);

    }

    printf("\n\n");

    int *idade_atual = idades;
    char **nome_atual = nomes;

    for(int i = 0; i < tamanho; i++){
        printf("%s tem %d anos.\n", *(nome_atual + i), *(idade_atual + i));
    }
    return 0;
}
