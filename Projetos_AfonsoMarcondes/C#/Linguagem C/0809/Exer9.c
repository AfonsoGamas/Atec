#include <stdio.h>

int main(){
    int salario;
    printf("Qual o seu salario? ");
    scanf("%d", &salario);

    if (salario <= 1500){
        printf("Salário baixo");
    }
    else if (salario <= 2000){
        printf("Salário acima da média");
    }
    else{
        printf("Salario de rico");
    }


}
