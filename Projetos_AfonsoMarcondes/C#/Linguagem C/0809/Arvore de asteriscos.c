#include <stdio.h>
int main(){
    int x;
    printf("Altura da arvore: ");
    scanf("%d", &x);

    printf(" \n");

    int i = -1;
    int e = x;

    for(int a = 0; a != x; a += 1){

        i += 2;
        for(int s = (x - i); s != 0; s -= 1){
            printf(" 1");
        }
        for(int y = 0; y != i; y += 1){
            printf(" *");
        }
        printf("\n");
        e -= 1;
    }
}
