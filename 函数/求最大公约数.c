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
    int d = max(num1, num2),x = min(num1, num2);
    for(int i=x-1;i>1;--i){
        if (d%i==0&&x%i==0){
            printf("%d", i);
            return 0;
        }
    }
    
}