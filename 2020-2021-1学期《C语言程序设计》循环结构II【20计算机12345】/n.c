#include<stdio.h>

int main() {
    int h, w;
    scanf("%d%d", &h, &w);
    while (h != 0) {
        int i, j;
        for (i = 0; i < h; i++) {
            for (j = 0; j < w; j++) {
                if ((i % 2 == 0 && j % 2 == 0 || i % 2 == 1 && j % 2 == 1))
                    printf("#");
                else printf(".");
            }
            printf("\n");
        }
        printf("\n");
        scanf("%d%d", &h, &w);
    }
}
