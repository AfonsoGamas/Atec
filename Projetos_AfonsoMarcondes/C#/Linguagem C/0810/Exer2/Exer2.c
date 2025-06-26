#include <stdio.h>

int main(){
    int x;
    int *ponteiro;

    printf("Digite um valor para x: ");
    scanf("%d", &x);

    ponteiro = &x;

    printf("Valor de x: %d\n", *ponteiro);
    printf("Endereco de x: %p\n", ponteiro);

    *ponteiro *= 2;

    printf("O dobro de x: %d\n", *ponteiro);

    return 0;
}
