#include <stdio.h>

int func(int num){
    if(num < 1){
        return 1;
    }
    return num * func(num - 1);

}

int main(){
    int num1;
    int resultado;
    printf("Insira um numero: ");
    scanf("%d", &num1);

    resultado = func(num1);
    printf("O resultado é %d", resultado);

}
