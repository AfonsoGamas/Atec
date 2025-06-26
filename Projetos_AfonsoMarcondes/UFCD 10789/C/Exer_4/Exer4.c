#include <stdio.h>

int main(){
    float cheque, saldo;

    printf("Insira o saldo do cliente: ");
    scanf("%f", &saldo);

    printf("Insira o valor do cheque: ");
    scanf("%f", &cheque);

    if(saldo < cheque){
        printf("Infelismente o cheque não poderá ser descontado.");
    }
    else{
        float saldo_atualizado = saldo - cheque;
        printf("O cheque foi descontado com sucesso.\n");
        printf("O saldo atual é de %.2f €.", saldo_atualizado);
    }
    return 0;
}
