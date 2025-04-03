#include <stdio.h>

int main(void) {
    int n, an, dn;
    char p;

    scanf("%d", &n);

    an = 0;
    dn = 0;

    
    for (int i = 0; i < n; i++) {
        scanf(" %c", &p);  

        
        if (p == 'D') {
            dn++;
        } else if (p == 'A') {
            an++;
        }
    }

    if (an > dn) {
        printf("Anton\n");
    } else if (dn > an) {
        printf("Danik\n");
    } else {
        printf("Friendship\n");
    }

    return 0;
}
