#include <stdio.h>

int main(void) {
    int n, f, total = 0, resp = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &f);
        total += f;
    }
    for (int i = 1; i <= 5; ++i) {
        if ((total + i) % (n + 1) != 1) {
            resp += 1;
        }
    }
    printf("%d\n", resp);
    return 0;
}
