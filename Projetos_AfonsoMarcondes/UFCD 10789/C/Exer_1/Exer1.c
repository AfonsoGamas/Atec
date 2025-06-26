#include <stdio.h>

int main(){
    int seg;

    printf("Insira um numero: ");
    scanf("%d", &seg);

    int min = seg/60;
    int hora = min/60;

    printf("\n%d segundos sao %d minutos e %d horas.\n", seg, min, hora);

    return 0;
}
