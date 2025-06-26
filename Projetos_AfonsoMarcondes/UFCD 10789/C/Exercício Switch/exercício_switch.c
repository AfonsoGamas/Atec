#include <stdio.h>

int main() {
    int var;
    
    printf("Insira um numero da 1 a 12: ");
    scanf("%d", &var);
    
    switch(var)
    {
        case 1:
            printf("\nO numero 1 corresponde ao mês de **Janeiro**");
            break;
            
        case 2:
            printf("\nO numero 2 corresponde ao mês de **Fevereiro**");
            break;
            
        case 3:
            printf("\nO numero 3 corresponde ao mês de **Março**");
            break;
            
        case 4:
            printf("\nO numero 4 corresponde ao mês de **Abril**");
            break;
            
        case 5:
            printf("\nO numero 5 corresponde ao mês de **Maio**");
            break;
            
        case 6:
            printf("\nO numero 6 corresponde ao mês de **Junho**");
            break;
            
        case 7:
            printf("\nO numero 7 corresponde ao mês de **Julho**");
            break;
            
        case 8:
            printf("\nO numero 8 corresponde ao mês de **Agosto**");
            break;
            
        case 9:
            printf("\nO numero 9 corresponde ao mês de **Setembro**");
            break;
            
        case 10:
            printf("\nO numero 10 corresponde ao mês de **Outubro**");
            break;
            
        case 11:
            printf("\nO numero 11 corresponde ao mês de **Novembro**");
            break;
            
        case 12:
            printf("\nO numero 12 corresponde ao mês de **Dezembro**");
            break;
            
        default:
            printf("\n**Numero Incorreto**");
    }
    
    return 0;
}
