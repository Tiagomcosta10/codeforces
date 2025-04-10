#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, s, m;
        scanf("%d %d %d", &n, &s, &m);

        int inicio = 0, fim = 0, possivel = 0;

        for (int i = 0; i < n; i++) {
            int l, r;
            scanf("%d %d", &l, &r);

            if (l - fim >= s) {
                possivel = 1;
            }
            fim = r;
        }

        if (m - fim >= s) {
            possivel = 1;
        }

        if (possivel) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
