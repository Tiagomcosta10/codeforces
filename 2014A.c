#include <stdio.h>

int main() {
    int ouro_robin;
    int pessoas_ajudadas;
    int limite_pracomecarroubo;
    int n_pessoas;
    int testes;

    scanf("%d", &testes);

    while (testes--) {
        scanf("%d %d", &n_pessoas, &limite_pracomecarroubo);

        int ouro_das_pessoas[n_pessoas+1]; 
        for (int i = 0; i < n_pessoas; i++) {
            scanf("%d", &ouro_das_pessoas[i]);
        }

        ouro_robin = 0;
        pessoas_ajudadas = 0;

        for (int i = 0; i < n_pessoas; i++) {
            if (ouro_das_pessoas[i] >= limite_pracomecarroubo) {
            
                ouro_robin += ouro_das_pessoas[i];
            } else if (ouro_das_pessoas[i] == 0) {
                
                if (ouro_robin > 0) {
                    ouro_robin -= 1;
                    pessoas_ajudadas += 1;
                }
            }
        
        }

        printf("%d\n", pessoas_ajudadas);
    }

    return 0;
}
