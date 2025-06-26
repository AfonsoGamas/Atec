#include <stdio.h>

int main() {
    int num[10];
    
    for(int i = 0; i < 10; i++)
    {
        printf("Insira o %dº numero: ", i + 1);
        scanf("%d", &num[i]);
    }
    
    for(int i = 0; i < 10; i++)
    {
        if(num[i] % 2 == 0)
        {
            printf("\n\n%d é **PAR**", num[i]);
        }
        else
        {
            printf("\n\n%d é **IMPAR**", num[i]);
        }
    }
    
    return 0;
}
