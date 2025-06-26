#include <stdio.h>

int main(){
    int a[] = {1, 2, 3, 4, 5};
    int *ponteiro = a;
    int tamanho = sizeof(a) / sizeof(a[0]);
    for(int i = 0; i < tamanho; i++){
        printf("%d\n", *(ponteiro + i));
    }

    printf("\n\n");

    for(int i = 0; i < tamanho; i++){
        *(ponteiro + i) *= 2;
        printf("%d\n", *(ponteiro + i));
    }
    return 0;
}
