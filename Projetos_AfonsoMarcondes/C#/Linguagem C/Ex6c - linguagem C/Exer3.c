#include <stdio.h>

int main() {
    int n = 0;
    
    printf("Insira um Numero: ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        printf("\n");
        
        for(int y = 0; y < i + 1; y++){
            printf(" *");
        }
    }
    
    return 0;
}
