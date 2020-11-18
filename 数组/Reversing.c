#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;++i){
        scanf("%d", &arr[i]);
    }
/*for(int a=1;a<=n-1;a++){
        for(int i=0;i<n-1;i++){
	        int x1=arr[i],x2=arr[i+1];
	        if(x1<x2){
                arr[i]=x2,arr[i+1]=x1;
            }
        }
    }*/
    for(int i=n-1;i>=1;--i){
        printf("%d ", arr[i]);
    }
    printf("%d",arr[0]);
}
