#include <stdio.h>

void prchar(int line,int allline){
    int linegs=line*2-1;//每一行的字符个数
    int maxlinegs=allline*2-1;//最后一行的字符个数
    int target=(maxlinegs-linegs)/2;//每一行空格的个数的一半
    for (int i = 1; i <= target; ++i) {printf("\040");}//空格
    int cell=65;
    for (int i = target+1; i < (maxlinegs+1)/2; ++i,cell++) {
        printf("%c", cell);
    }
    printf("%c", cell);
    for (int i = (maxlinegs+1)/2+1; i <= maxlinegs-target; ++i) {
        cell--;
        printf("%c", cell);
    }
    for (int i = 1; i < target; ++i) {printf("\040");}//空格
}

int main() {
    int allline=58;//总行数58之内正常
    for (int i = 1; i <= allline; ++i) {
        prchar(i,allline);
        printf("\n");
    }
}