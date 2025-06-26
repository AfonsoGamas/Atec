#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr;

    printf("Digite o tamanho do array: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    printf("Digite %d números inteiros:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Corrigido aqui
    }

    printf("Valores armazenados no array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}
