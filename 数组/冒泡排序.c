#include<stdio.h>

int main()
{
    int arr[10];
    for(int i=0;i<10;++i){
        scanf("%d", &arr[i]);
    }
    for(int a=1;a<=9;a++){
        for(int i=0;i<9;i++){
	        int x1=arr[i],x2=arr[i+1];
	        if(x1>x2){
                arr[i]=x2,arr[i+1]=x1;
            }
        }
    }

    
    for(int i=0;i<10;++i){
        printf("%d\n", arr[i]);
    }
}
