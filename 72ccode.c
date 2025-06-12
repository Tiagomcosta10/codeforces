#include <stdio.h>
#include <math.h>
int main() {
    int x;
    scanf("%d", &x);
    
    int contagem_pares = 0, contagem_impares = 0;
    
    for (int i = 1; i <= sqrtf(x); i++) {
        if (x % i == 0) {
            if (i % 2 == 0) {
                contagem_pares++;
            } else {
                contagem_impares++;
            }
        }
    }
    
    if (contagem_pares == contagem_impares) {
        printf("sim\n");
    } else {
        printf("não\n");
    }
    
    return 0;
}
