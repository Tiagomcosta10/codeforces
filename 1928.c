#include <stdio.h>

int main(void) {
    int t; 
    scanf("%d", &t); 
    while (t--) 
        int a, b; 
        scanf("%d %d", &a, &b);

       
        if (a > b) {
            int temp = a; 
            a = b;
            b = temp; 
        }

       
        if (((a % 2 == 1) && (b % 2 == 1)) || ((a % 2 == 1) && (b == 2 * a))) {
            printf("No\n"); 
        } else {
            printf("Yes\n"); 
        }
    }

    return 0; 
}
