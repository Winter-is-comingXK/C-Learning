#include <stdio.h>

int min(int num1, int num2){
    if(num1<=num2)
        return num1;
    else
        return num2;
}

int max(int num1, int num2){
    if(num1>=num2)
        return num1;
    else
        return num2;
}

int main(){
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    int d= max(num1, num2),x= min(num1, num2);
    for(int i=d+1;;++i){
        if(i%x==0&&i%d==0){
            printf("%d", i);
            return 0;}
}}