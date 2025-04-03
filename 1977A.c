#include <stdio.h>

int main(void) {
    int t; 
    scanf("%d", &t);
    
    while(t--) {
        int n, m; 
        scanf("%d %d", &n, &m);
        
        if (m >= 0 && m <= n && (n - m) % 2 == 0) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    
    return 0;
}
