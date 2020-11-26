#include <stdio.h>
int main() {
    int n, sum = 0;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            scanf("%d", &arr[i][j]);
    for (int i = 0; i < n; ++i)
        sum += arr[i][i];
    for (int i = 0; i < n; ++i)
        sum += arr[i][n - i - 1];
    if (n % 2 != 0)
        sum -= arr[((n + 1) / 2) - 1][((n + 1) / 2) - 1];
    printf("%d", sum);
}