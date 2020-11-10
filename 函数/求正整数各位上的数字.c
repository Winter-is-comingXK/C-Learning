#include <stdio.h>
int weishu(int num){
    int i=1;
    scanf("%d", &num);
    for (; num>=10; ++i)
        num /= 10;
    return i;
}

int main(){
    int num;
    scanf("%d", &num);
    int ws = weishu(num);
    int arr[ws];
    for(int i=0;i<ws;++i){
        arr[i] = num%10;
        num /= 10;
    }
    for(int i=ws-1;i>=0;--i){
        printf("%d ", arr[i]);
    }
}
//这并不是最简单的算法