#include "stdio.h"

int sum(int num){
    if (num>0)
    return sum(num-1)+num;
}

int main() {
        printf("%d", sum(100));
}