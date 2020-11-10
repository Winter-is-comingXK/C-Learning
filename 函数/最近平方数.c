#include<math.h>
#include<stdio.h>
int main(){
    int n,i;
    scanf("%d", &n);
    i=sqrt(n);
    if(i*i==n)
        printf("%d", n);
    int x2;
    x2=(i+1)*(i+1);
    if((x2-n)>(n-i*i))
        printf("%d", i*i);
    else
        printf("%d", x2);
    return 0;
}