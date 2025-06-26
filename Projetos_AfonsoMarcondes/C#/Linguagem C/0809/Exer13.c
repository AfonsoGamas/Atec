#include <stdio.h>

int main(){
    int num;
    printf("Introduza um numero: ");
    scanf("%d", &num);

    for(int num2 = num; num2 != ((num * 5) + 1); num2 += 1){
        printf("\n%d\n", num2);
    }
    return 0;
}
