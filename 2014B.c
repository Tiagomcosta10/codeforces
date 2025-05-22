#include <stdio.h>

int main() {
    int num_casos_teste;
    scanf("%d", &num_casos_teste);

    while (num_casos_teste--) {
        long long ano_desejado, duracao_folhas, ano_inicial;
        scanf("%lld %lld", &ano_desejado, &duracao_folhas);

        ano_inicial = ano_desejado - duracao_folhas + 1;
        if (ano_inicial < 1) ano_inicial = 1;

        long long total_anos_impares = ((ano_desejado + 1) / 2) - (ano_inicial / 2);

        if (total_anos_impares % 2 == 1) {
            printf("NAO\n");
        } else {
            printf("SIM\n");
        }
    }

    return 0;
}
