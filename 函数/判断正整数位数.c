#include <stdio.h>
int main(){
    int num, i=1;
    scanf("%d", &num);
    for (; num>=10; ++i)
        num /= 10;
    printf("%d", i);
}