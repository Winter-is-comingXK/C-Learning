#include <cstdio>
#include <math.h>
using namespace std;
int is(int num) {
    for (int i = 2; i <= sqrt((double) num); ++i)if (num % i == 0)return 0;
    return 1;
}


int main() {
    int n, count = 0, len = -1;
    scanf("%d", &n);
    int arr[100000] = {0};
    for (int i = 2; i <= n; ++i) {
        if (is(i))arr[++len] = i;
    }
    for (int i = 0; i < len; ++i) {
        if (arr[i+1]-arr[i]<=2)
            count++;
    }
    printf("%d", count);
}