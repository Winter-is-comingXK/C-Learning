#include <stdio.h>

int cal(int b) {
    for (int i = 1; i <= b; ++i) {
        printf("#");
    }
}

int main() {
    int a, b;
    while (scanf("%d%d", &a, &b) != EOF && a != 0 && b != 0) {
        for (int i = 1; i <= a; ++i) {
            cal(b);
            printf("\n");
        }
        printf("\n");
    }
}
