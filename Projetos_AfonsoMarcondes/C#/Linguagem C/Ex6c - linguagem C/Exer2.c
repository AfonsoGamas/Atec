#include <stdio.h>

int main() {
    int n = 0;
    char c;
    
    printf("Insira um Numero: ");
    scanf("%d", &n);
    printf("Insira um Caracter: ");
    scanf(" %c", &c);
    
    for(int i = 0; i < n; i++){
        for(int y = 0; y < n; y++){
            printf(" %c", c);
        }
        printf("\n");
    }
    
    return 0;
}
