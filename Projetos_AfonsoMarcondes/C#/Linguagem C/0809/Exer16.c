#include <stdio.h>

int main(){
    int tamanho;
    int escolha;
    printf("Insira o tamanho da matriz: ");
    scanf("%d", &tamanho);

    int matriz[tamanho][tamanho];

    // Escrever os dados da Matriz
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            printf("Insira o valor da coluna %d, linha %d da matriz: ", i+1, j+1);
            scanf("%d", &escolha);
            matriz[i][j] = escolha;
        }
        printf("\n");
    }
    // Imprimir a Matriz
    printf("A matriz e: \n");
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            printf("    %d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Calcular a media e a soma da Matriz
    int media;
    int soma = 0;
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            soma += matriz[i][j];
        }
        printf("\n");
    }
    media = soma / (tamanho*2);
    printf("A soma da matriz e: %d", soma);
    printf("\nE a media da matriz e: %d", media);

}
