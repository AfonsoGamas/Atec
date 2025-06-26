#include <stdio.h>

int main(){
    int x;
    printf("Tamanho do quadrado: ");
    scanf("%d", &x);

    printf(" \n");

    for(int y = 0; y != x; y += 1){
        printf(" +");
    }
    printf("\n");
    for(int y = 0; y != (x - 2); y += 1){
        printf(" +");
        for(int y = 0; y != (x - 2); y += 1){
            printf("  ");
        }
        printf(" +\n");
    }
    for(int y = 0; y != x; y += 1){
        printf(" +");
    }
    printf(" \n");
}
