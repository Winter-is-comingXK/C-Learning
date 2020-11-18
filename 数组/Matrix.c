#include <stdio.h>

int main() {
    int m, n, t;
    scanf("%d%d", &m, &n);
    int a1[m][n], a2[n];
    for (int a = 0; a < m; ++a) {
        for (int b = 0; b < n; ++b) {
            scanf("%d", &t);
            a1[a][b] = t;
        }
    }
    for (int a = 0; a < n; ++a) {
        scanf("%d", &t);
        a2[a] = t;
    }
    for (int i = 0; i < m; ++i) {
        int sum=0;
        for (int k = 0; k < n; ++k) {
            sum += a1[i][k]*a2[k];
        }
        printf("%d\n", sum);
    }
}
