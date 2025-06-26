#include <stdio.h>

int main(){
    int num1, num2, num3;

    printf("Insira o 1º de 3 numeros: ");
    scanf("%d", &num1);

    printf("Insira o 2º numero: ");
    scanf("%d", &num2);

    printf("Insira o 3º numero: ");
    scanf("%d", &num3);

    if(num1 > num2){
        printf("%d é maior.", num1);
    }
    else if (num2 > num3){
        printf("%d é maior.", num2);
    }
    else{
        printf("%d é maior.", num3);
    }

    return 0;
}
