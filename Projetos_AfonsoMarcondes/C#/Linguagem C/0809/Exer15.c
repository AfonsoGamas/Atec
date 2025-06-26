#include <stdio.h>

int main() {
    int dimencao;
    int valor = 0;
    int elementosInseridos;
    printf("Qual a dimencao do vetor: ");
    scanf("%d", &dimencao);

    // Definindo o tamanho do vetor de acordo com a dimensão fornecida
    int vetor[dimencao];

    for (int tamanho = 0; tamanho < dimencao; tamanho++) {
        printf("Insira um numero para o vetor, para terminar digite -1: ");
        scanf("%d", &valor);

        if (valor == -1) {
            break; // Se o usuário digitar -1, termina a inserção
        }
        vetor[tamanho] = valor; // Armazena o valor no vetor

        elementosInseridos = tamanho; // Guarda a quantidade de elementos inseridos
    }


    printf("O conteudo do vetor invertido e:");

    // Imprimindo os elementos do vetor na ordem inversa
    for (int i = elementosInseridos; i >= 0; i--) {
        printf("\n%d", vetor[i]);
    }

    return 0;
}
