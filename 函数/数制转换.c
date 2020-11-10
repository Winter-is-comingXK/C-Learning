#include<stdio.h>
#include<string.h>
int main(){
    char s[50];
    scanf("%s",&s);
    int t,len;
    len = strlen(s);
    long long sum=0;
    for(int i=0;i<len;i++){
        if(s[i]<='9')
            t=s[i]-'0';
        else
            t=s[i]-'A'+10;
        sum=sum*16+t;
    }
    printf("%lld",sum);
    return 0;
}