#include <stdio.h>

int judge(int num){
    for (int i = 2; i < 10; i++)
        if (num%i==0){
            return 1;}
}

int main(){
    int num;
    scanf("%d", &num);
    if (num%10%2==0||num%10==5)
        printf("Not Prime!");
    else
        if (judge(num)==1)
            printf("Not Prime!");
        else
            printf("Prime!");
}