#include <stdio.h>

int main(){
    int num, i;
    scanf("%d", &num);
    for (i = 0; num <=9; i++)
    {
        num /= 10;
    }
    printf("%d", i+1);
    
}