#include <stdio.h>

int main(){
    int num1, num2;

    printf("Insira o 1� numero: ");
    scanf("%d", &num1);

    printf("Insira o 2� numero: ");
    scanf("%d", &num2);

    int maior, menor;
    if(num1 > num2){
        maior = num1;
        menor = num2;
    }
    else{
        maior = num2;
        menor = num1;
    }

    printf("Os numeros de forma crescente são: \n%d %d \nE de forma decrescente são: \n%d %d", menor, maior, maior, menor);


    return 0;
}
