#include <stdio.h>

void swap(int *a,int *b){
    int t = *a;
    printf("%d\n",*a);
    *a = *b;
    *b = t;
}

int main() {
    int a=1,b=2;
    printf("%p\n",&a);
    printf("%d %d\n",a,b);
    swap(&a,&b);
    printf("%d %d",a,b);
}
