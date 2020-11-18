#include <stdio.h>
int main() {
    char arr[100];
    for (int i = 0; i < 100; ++i) {
        arr[i] = -1;
    }
    scanf("%s", &arr);
    for (int i = 0; i < 100; ++i) {
        if (arr[i] > 0) {
            if (arr[i] >= 65 && arr[i] <= 90) {
                printf("%c", arr[i] + 32);
            } else
                printf("%c", arr[i]);
        }
    }
}