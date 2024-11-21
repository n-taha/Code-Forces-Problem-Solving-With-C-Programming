#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int m;
        int a, b, c;
        scanf("%d", &m);
        scanf("%d %d %d", &a, &b, &c);

        if (a == 0 || b == 0 || c == 0) {
            if (m == 0) {
                printf("0\n");
            } else {
                printf("-1\n");
            }
            continue;
        }

        long long num = a * b * c;

        if (m % num == 0) {
            printf("%lld\n", m / num);
        } else {
            printf("-1\n");
        }
    }

    return 0;
}
