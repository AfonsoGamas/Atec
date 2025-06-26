#include <stdio.h>

int main() {
    char nome[] = "Afonso Marcondes";
    int idade = 17;
    float Altura = 1.75;
    float Peso = 80;
    char Morada[] = "Sesimbra";

    printf("| %-10s |\n", nome);
    printf("| %-10d |\n", idade);
    printf("| %-10f |\n", Altura);
    printf("| %-10f |\n", Peso);
    printf("| %-10s |\n", Morada);
    return 0;
}
