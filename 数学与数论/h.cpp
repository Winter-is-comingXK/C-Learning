#include <cstdio>
#include <cmath>
using namespace std;

int main() {
    int n,t;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        double x = n * log10((double) n);
        x -= (long long) x;
        x = (int) pow(10, x);
        printf("%.0lf\n", x);
    }
}