#include<stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        int sum = 0, num = n;
        while (num != 0) {
            sum += num % 10;
            num /= 10;
        }
        printf("%d\n", sum);
    }
}
