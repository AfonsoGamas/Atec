#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[20];
    char apelido[20];
    int telefone;
    char email[50];
    char observacoes[50];
}agenda;
char nomes_existentes[100][20] = {};
int total_contactos = 1;

////////// RC //////////
void rc(struct agenda *a){
    char escolha[20];

    printf("Insira o nome do contacto: ");
    scanf("%19s", escolha);
        for(int i = 0; i < total_contactos; i++){
         if(strcmp(escolha, nomes_existentes[i]) == 0){
            printf("Contacto Existente na posição %d\n", i);
            return;
         }
        }
    strcpy(a->nome, escolha);
    total_contactos += 1;
    strcpy(nomes_existentes[total_contactos], escolha);


    printf("Insira o apelido do contacto: ");
    scanf("%19s", a->apelido);

    printf("Insira o telefone do contacto: ");
    scanf("%d", a->telefone);

    printf("Insira o email do contacto: ");
    scanf("%49s", a->email);

    printf("Insira o observacoes do contacto: ");
    scanf("%49s", a->observacoes);

    printf("Contacto registado com sucesso");
};


////////// PC //////////
char pc(){

}

int main(){
    struct agenda contato;
    struct agenda contato_2;
    rc(&contato);

    printf("\nDados do contacto:\n");
    printf("Nome: %s\n", contato.nome);
    printf("Apelido: %s\n", contato.apelido);
    printf("Telefone: %d\n", contato.telefone);
    printf("Email: %s\n", contato.email);
    printf("Observacoes: %s\n", contato.observacoes);


    rc(&contato_2);

    printf("\nDados do contacto:\n");
    printf("Nome: %s\n", contato_2.nome);
    printf("Apelido: %s\n", contato_2.apelido);
    printf("Telefone: %d\n", contato_2.telefone);
    printf("Email: %s\n", contato_2.email);
    printf("Observacoes: %s\n", contato_2.observacoes);




    return 0;
}
