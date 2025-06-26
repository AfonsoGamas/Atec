#include <stdio.h>

int main() {
    int seg;

    printf("Insira um número de segundos: ");
    scanf("%d", &seg);  // Corrigido o uso do scanf

    int min = seg / 60;
    int hora = seg / 3600;
    int resto_min = (seg % 3600) / 60;  // Para exibir os minutos corretamente

    printf("%d segundos equivalem a %d horas, %d minutos e %d segundos.\n", seg, hora, resto_min, seg % 60);

    return 0;
}
