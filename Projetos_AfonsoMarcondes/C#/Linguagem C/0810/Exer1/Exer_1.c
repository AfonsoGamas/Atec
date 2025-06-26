#include <stdio.h>

int main(){

    //////////////////////////// Exercicio 1 ////////////////////////////
    int a;
    int b = 0;
    printf("Exercicio 1\n\n");

    printf("Insira um numero: ");
    scanf("%d", &a);

    while(b < a){
        printf("\nBatata\n");
        b++;
    }


    //////////////////////////// Exercicio 2 ////////////////////////////

    printf("\n\nExercicio 2\n\n");

    int c;
    int d;
    printf("Insira um numero: ");
    scanf("%d", &c);
    printf("Insira outro numero: ");
    scanf("%d", &d);

    switch(c < d){
        case 0:
            while(c >= d){
                printf("\n%d\n", c);
                c--;
            }
                break;

        case 1:
            while(d >= c){
                printf("\n%d\n", d);
                d--;
            }
                break;
    }


    return 0;
}
