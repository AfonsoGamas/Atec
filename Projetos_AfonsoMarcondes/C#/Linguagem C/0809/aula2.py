"""
#include <stdio.h>

#define TAMANHO 100

int main{
    printf("Olá\n");

    int n;
    char c;
    char palavra[TAMANHO];
    char* palavra[];

    scanf("%d", &n);

    printf("O numero introduzido foi %d", n);


}
"""

#include <stdio.h>

#define TAMANHO 100

int main() {
    printf("Olá\n");

    int n;
    char c;
    char palavra[TAMANHO];

    scanf("%d", &n);

    printf("O numero introduzido foi %d\n", n);

    return 0;
}
