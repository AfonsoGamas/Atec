#include <stdio.h>

int tamanho(a){
    size_t b = strlen(a);
    return b;
}
int main(){
    char s[] = "Ola";
    int num_caracteres;
    num_caracteres = tamanho(s);
    printf("O numero de caracteres e: %zu\n", num_caracteres);
}
