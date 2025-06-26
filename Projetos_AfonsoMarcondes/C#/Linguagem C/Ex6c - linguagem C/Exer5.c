#include <stdio.h>
#include <stdbool.h>

int main() {
    int n = 0;
    
    while(true){
        printf("Insira um Numero entre 1 e 100: ");
        scanf("%d", &n);
        
        if(n >= 1 && n <= 100){
            printf("O numero Inserido foi %d", n);
            break;
        }
    }
    
    return 0;
}
