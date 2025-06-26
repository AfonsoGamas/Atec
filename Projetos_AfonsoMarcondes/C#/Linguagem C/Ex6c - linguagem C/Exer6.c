#include <stdio.h>
#include <stdbool.h>

int main() {
    char entrada;
    int cont = 0;
    
    while(true){
        entrada = getchar();
        
        if(entrada == ' '){
            cont++;
        }
        else if(entrada == '.'){
            entrada = getchar();
            
            if(entrada == '\n'){
            break;
            } else if(entrada == ' '){
                cont++;
            }
        } else {
            continue;
        }
    }
    
    return 0;
}
