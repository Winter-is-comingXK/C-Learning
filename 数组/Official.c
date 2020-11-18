#include<stdio.h>
int main()
{
    int arr[4][3][10]={0};
    int n;
    scanf("%d", &n);
    int b,f,r,v;
    for(int a=1;a<=n;a++){
        scanf("%d%d%d%d", &b, &f, &r, &v);
        arr[b-1][f-1][r-1]+=v;
    }
    for (int a = 0; a < 3; a++){
        for (int b = 0; b < 3; b++){
            for (int c = 0; c < 10; c++){
                printf(" %d", arr[a][b][c]);
            }
            printf("\n");
        }
        printf("####################\n");
    }
    for (int b = 0; b < 2; b++){
        for (int c = 0; c < 10; c++){
            printf(" %d", arr[3][b][c]);
        }
            printf("\n");
    }
        for (int c = 0; c < 10; c++){
                printf(" %d", arr[3][2][c]);
            }
}
