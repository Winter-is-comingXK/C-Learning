#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n * 2 + 1][n * 2 + 1];
    int m = n, j = 0, d;
    while (m >= 0) {
        d = n * 2 + 1 - 1 - j;
        for (int i = j; i <= d; ++i) {//行填入
            arr[j][i] = m, arr[d][i] = m;
        }
        for (int i = j; i <= d; ++i) {//列填入
            arr[i][j] = m, arr[i][d] = m;
        }
        m--, j++;
    }
    for (int i = 0; i < n * 2 + 1; ++i) {
        for (int k = 0; k < n * 2 + 1; ++k) {
            printf("%d ", arr[i][k]);
        }
        printf("\n");
    }
}
