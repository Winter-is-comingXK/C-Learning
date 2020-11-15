//
// Created by deepin on 2020/11/15.
//

#include "stdio.h"

int draw(int arr[][4]){
    printf("%d\t%d\t%d\n%d\t%d\t%d\n%d\t%d\t%d\n", arr[1][1], arr[2][1], arr[3][1], arr[1][2], arr[2][2], arr[3][2], arr[1][3], arr[2][3], arr[3][3]);
    return 0;
}

int main() {
    int arr[4][4]={0},x,y,i=0;
    while (i!=3){
        i++;
        scanf("%d%d", &x, &y);
        arr[x][y] = 1;
    }
    draw(arr);
}