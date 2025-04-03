
#include <stdio.h>

int main() {
    long long n, m, a;
    
    scanf("%lld %lld %lld", &n, &m, &a);
    
    long long lh = (n + a - 1) / a;
    long long lv = (m + a - 1) / a;
    
    long long total = lh * lv;
    
    printf("%lld\n", total);
    
    return 0;
}
