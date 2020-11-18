#include<bits/stdc++.h>
using namespace std;
int main() {
    char arr1[4] = {'S', 'H', 'C', 'D'};
    char arr[13][4];
    for (int a = 0; a < 13; a++) {
        for (int b = 0; b < 4; b++) {
            arr[a][b] = arr1[b];
        }
    }//数组初始化，将每个二维数组转换为{'S', 'H', 'C', 'D'}

    int n, b, c;
    char a;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {//获取数据并修改数组
        //scanf("%s%d", &a, &b);
        cin>>a>>b;
        switch (a) {case 'S':c = 0;break;
                    case 'H':c = 1;break;
                    case 'C':c = 2;break;
                    case 'D':c = 3;break;}
        arr[b - 1][c] = 0;
    }//获取数据并对指定的数组进行修改为0

    for (int a = 0; a < 4; ++a) {//指定数组不为0就打印出来
        for (int b = 0; b < 13; b++) {
            if (arr[b][a] != 0) {
                cout<<arr[b][a]<<" "<<b+1<<"\n";
                //printf("%c %d\n", arr[b][a], b + 1);
            }
        }
    }
}