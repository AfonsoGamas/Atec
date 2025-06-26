#include <stdio.h>

int main() {
    char tipo_combustivel[20];
    float preco_combustivel, capacidade_deposito, kms_percorridos, consumo_estimado;
    float litros_por_100km;

    printf("Tipo de combustível (Gasolina, Gasóleo, GPL): ");
    scanf("%s", tipo_combustivel);
    printf("Preço do combustível por litro: ");
    scanf("%f", &preco_combustivel);
    printf("Capacidade do depósito (litros): ");
    scanf("%f", &capacidade_deposito);
    printf("Kms percorridos com 1 depósito atestado: ");
    scanf("%f", &kms_percorridos);

    litros_por_100km = (capacidade_deposito / kms_percorridos) * 100;

    printf("Consumo estimado: %.2f litros/100km\n", litros_por_100km);

    if (strcmp(tipo_combustivel, "Gasóleo") == 0 || strcmp(tipo_combustivel, "Gasolina") == 0) {
        if (litros_por_100km >= 10) {
            printf("Consumo elevado!\n");
        } else if (litros_por_100km <= 4) {
            printf("Consumo reduzido.\n");
        } else {
            printf("Consumo equilibrado.\n");
        }
    } else if (strcmp(tipo_combustivel, "GPL") == 0) {
        if (litros_por_100km >= 15) {
            printf("Consumo elevado!\n");
        } else if (litros_por_100km <= 5.7) {
            printf("Consumo reduzido.\n");
        } else {
            printf("Consumo equilibrado.\n");
        }
    } else {
        printf("Tipo de combustível desconhecido.\n");7
    }

    return 0;
}
