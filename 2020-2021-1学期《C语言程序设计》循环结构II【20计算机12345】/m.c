#include <stdio.h>

int cal(int b) {
    for (int i = 1; i <= b; ++i) {
        printf("#");
    }
}
int cal1(int b) {
    printf("#");
    for (int i = 1; i <= b-2; ++i) {
        printf(".");
    }
    printf("#");
}

int main() {
    int a, b;
    while (scanf("%d%d", &a, &b) != EOF && a != 0 && b != 0) {
        cal(b);
        printf("\n");
        for (int i = 1; i <= a-2; ++i) {
            cal1(b);
            printf("\n");
        }
        cal(b);
        printf("\n\n");
    }
}
