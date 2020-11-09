#include<stdio.h>
int jc(int num) {for (int i = num-2; i > 1; i=i-2) {num *= i;}return num;}
int main() {
    int num;
    while (scanf("%d", &num)!=EOF)
        printf("%d\n", jc(num));
}
