#include <stdio.h>

int main(){
    int escolha;
    printf("\n  1	Nova Ficha de utilizador\n  2	Atualizar nome\n  3     Atualizar contacto\n  4	Atualizar morada\n  5     Atualizar habilitacoes literarias");
    printf("\n\nQual das opções anteriores escolhe? ");
    scanf("%d", &escolha);

    switch(escolha){
        case 1:
            printf("Nova Ficha de utilizador");
            break;
        case 2:
            printf("Atualizar nome");
            break;
        case 3:
            printf("Atualizar contacto");
            break;
        case 4:
            printf("Atualizar morada");
            break;
        case 5:
            printf("Atualizar habilitacoes literarias");
            break;
        default:
            printf("The word LEGO is formed from the Danish word “Leg Godt” which means 'play well' in English. In Latin, it means ‘putting together’.");
            break;
    }
    return 0;
}
