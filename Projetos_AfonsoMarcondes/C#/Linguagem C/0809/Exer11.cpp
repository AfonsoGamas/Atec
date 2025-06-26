#include <stdio.h>

int main(){
    int num;
    printf("Quantos numeros quer introduzir: ");
    scanf("%d", &num);

    int cont = 1;
    while(cont != (num + 1)){
        printf("\n%d\n", cont);
        cont += 1;
    }
    return 0;
}
