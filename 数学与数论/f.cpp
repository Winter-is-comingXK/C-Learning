#include<cstdio>
typedef long long ll;
int main() {
    ll a, b, c;
    while (scanf("%lld%lld%lld",&a,&b,&c)) {
        ll d = 1;
        if (a == 0 && b == 0 && c == 0)break;
        for (int i = 0; i < b; i++)d = d * a % c;
        printf("%lld\n", d);
    }
}