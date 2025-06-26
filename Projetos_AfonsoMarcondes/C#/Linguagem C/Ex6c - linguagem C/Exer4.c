#include <stdio.h>

int main() {
    int n = 0;
    int ascii = 97;
    
    printf("Insira um Numero: ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        printf("\n");
        
        for(int y = 0; y < i + 1; y++){
            printf(" %c", ascii);
        }
        ascii += 1;
    }
    
    return 0;
}
