#include <stdio.h>

typedef long long int ll;

void solve() {
    ll a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    ll ans = 0;
    if (a > d || c > b)
        ans = 1;
    else if (a == d || b == c)
        ans = 2;
    else if (a > c) {
        if (d < b)
            ans = d - a + 1 + 1;
        else if (d == b)
            ans = b - a + 1;
        else if (d > b)
            ans = b - a + 1 + 1;
    } else if (a == c) {
        if (d < b)
            ans = d - a + 1;
        else if (d == b)
            ans = b - a;
        else if (d > b)
            ans = b - a + 1;
    } else if (a < c) {
        if (d < b)
            ans = d - c + 1 + 1;
        else if (d == b)
            ans = d - c + 1;
        else if (d > b)
            ans = b - c + 1 + 1;
    }

    printf("%lld\n", ans);
}

int main() {
    int t;
    scanf("%d", &t); 
    while (t--) {
        solve();
    }
    return 0;
}