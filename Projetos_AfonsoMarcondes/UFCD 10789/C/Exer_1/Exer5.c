#include <stdio.h>

int main(){
    int num1, num2, num3;

    printf("Insira o 1� numero: ");
    scanf("%d", &num1);

    printf("Insira o 2� numero: ");
    scanf("%d", &num2);

    printf("Insira o 3� numero: ");
    scanf("%d", &num3);

// Qual é o maior
    int maior, medio, menor;
    if(num1 > num2){
        if(num1 > num3){
            maior = num1;
            if(num2 > num3){
                medio = num2;
                menor = num3;
            }
            else{
                medio = num3;
                menor = num2;
            }
         }
         else{
             maior = num3;
             medio = num1;
             menor = num2;
            }
    }
    else{
        if(num2 > num3){
            maior = num2;

            if(num1 > num3){
                medio = num1;
                menor = num3;
            }
            else{
                medio = num3;
                menor = num1;
            }
        }
        else{
                maior = num3;
                medio = num2;
                menor = num1;
            }
    }

    printf("Os numeros de forma crescente são: \n%d %d %d \nE de forma decrescente são: \n%d %d %d", menor, medio, maior, maior, medio, menor);

    return 0;
}
