#include <stdio.h>

int main() {
    int numero;

    printf("Por favor, insira um numero: ");
    scanf("%d", &numero);

    if (numero == 0) {
        numero = 100;
    } else if (numero > 0) {
        numero += 1;
    } else {
        numero -= 1;
    }

    printf("O novo valor é: %d\n", numero);

    return 0;
}
