#include "stdio.h"

int main() {
    int i;
    scanf("%d", &i);
    printf("%d", i < 0 ? ++i : --i);
}