#include <iostream>
#include <cstring>

using namespace std;
#define maxn 1000010
int pri[10000];
typedef long long LL;
bool a[maxn];
int Eratosthenes_Sieve(int n, int pri[]) {
    for (int i = 2; i * i <= n; i++)
        if (a[i] == 0)
            for (int j = i << 1; j <= n; j += i)
                a[j] = 1;
    int cnt = 0;
    for (int i = 2; i <= n; i++)
        if (!a[i])
            pri[cnt++] = i;
    return cnt;
}
int main() {
    int cnt = Eratosthenes_Sieve(50000, pri);
    LL L, R;
    scanf("%lld %lld", &L, &R);
    memset(a, 0, sizeof(a));
    for (int i = 0; i < cnt; i++)
        for (LL j = max(2ll, (L - 1) / pri[i] + 1) * pri[i]; j <= R; j += pri[i])
            a[j - L] = 1;
    int ans = 0;
    for (LL i = L; i <= R; i++)
        if (a[i - L] == 0)
            ans++;
    printf("%d", ans);
    return 0;
}
