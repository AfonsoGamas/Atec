#include <stdio.h>

int main(){
    int num;
    printf("Introduza um numero: ");
    scanf("%d", &num);

    do{
        printf("\n%d\n", num);
        num -= 1;
    }while(num != -1);

    return 0;
}
