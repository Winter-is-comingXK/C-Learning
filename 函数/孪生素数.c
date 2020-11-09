#include <stdio.h>
long judge(long num){
    for (long i = 2; i < 10&&i<num; ++i){
        if (num%i==0){
            return 0;}}
    return 1;
}
long pd(long num){
    if (num!=5&&(num%10%2==0||num%10==5))
        return 0;
    else if (num==5)
        return 1;
    else if (judge(num)==0)
        return 0;
    else
        return 1;
}

int main(){
    long n, i=0;
    scanf("%ld", &n);
    for (; n-2>=1; --n)
    {
        long n1=pd(n),n2=pd(n-2), n3=pd(n-1);
        if(n1==1)
            if (n2==1||n3==1)
        {
            ++i;
        }
    }
    printf("%ld", i);
}