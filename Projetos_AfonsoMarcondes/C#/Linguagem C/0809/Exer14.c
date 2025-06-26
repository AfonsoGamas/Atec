#include <stdio.h>

int main(){
    int dimencao;
    int valor = 0;
    int vetor[dimencao];
    printf("Qual a dimencao do vetor: ");
    scanf("%d", &dimencao);

    for(int tamanho = 0; tamanho < dimencao; tamanho++){
            printf("Insira ou numeros do vetor, para terminar digite -1: ");
            scanf("%d", &valor);

            if(valor == -1){
                break;
            }
            vetor[tamanho] = valor;
        }
    printf("O conteudo do vetor e :");

    for(int i = 0; i < dimencao; i++){
        printf("\n%d", vetor[i]);
    }
    return 0;
}
