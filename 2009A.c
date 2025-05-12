#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t); 

    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b); 

        int resultado = b - a; 

        printf("%d\n", resultado); 
    }

    return 0;
}
