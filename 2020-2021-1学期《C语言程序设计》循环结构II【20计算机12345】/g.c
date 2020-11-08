#include<stdio.h>

int main() {
    int a, b, t = 0;
    scanf("%d%d", &a, &b);
    if (a <= b) {
        for (int i = a; i > 1; --i) {
            if (b % i == 0 && a % i == 0) {
                t = i;
                break;
            }
        }
    } else {
        for (int i = b; i > 1; --i) {
            if (b % i == 0 && a % i == 0)
                t = i;
        }
    }
    printf("%d", t);
}
