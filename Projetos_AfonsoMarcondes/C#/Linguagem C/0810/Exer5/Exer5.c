#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverter_string(char *str) {
    char *inicio = str;
    char *fim = str + strlen(str) - 1;
    while (inicio < fim) {
        char temp = *inicio;
        *inicio = *fim;
        *fim = temp;
        inicio++;
        fim--;
    }
}

int main() {
    int n;
    printf("Digite o tamanho máximo do texto: ");
    scanf("%d", &n);
    getchar(); // Captura o ENTER deixado pelo scanf

    char *texto = (char *)malloc((n + 1) * sizeof(char));
    if (texto == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    printf("Digite o texto: ");
    fgets(texto, n + 1, stdin);
    texto[strcspn(texto, "\n")] = '\0'; // Remove a quebra de linha

    printf("Texto inserido: %s\n", texto);

    inverter_string(texto);
    printf("Texto invertido: %s\n", texto);

    free(texto);
    return 0;
}
