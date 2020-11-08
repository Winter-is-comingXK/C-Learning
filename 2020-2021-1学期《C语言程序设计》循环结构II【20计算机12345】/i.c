#include <stdio.h>

int main() {
    long n;
    while (scanf("%ld", &n) != EOF) {
        long result = 0, k = 1, i, temp;
        temp = n;
        while (temp) {
            i = temp % 2;
            result = k * i + result;
            k = k * 10;
            temp = temp / 2;
        }
        printf("%ld-->%ld\n", n, result);
    }
}
