#include<stdio.h>

int main()
{
    int arr[10];
    scanf("%d%d%d%d%d%d%d%d%d%d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4],&arr[5],&arr[6],&arr[7],&arr[8],&arr[9]);
    for(int a=1;a<=9;a++){
    for(int i=0;i<9;i++){
        int x1=arr[i];
        int x2=arr[i+1];
        if (x1<x2){
        arr[i]=x2,arr[i+1]=x1;}
}}
    
    
    printf("%d %d %d %d %d %d %d %d %d %d",arr[0],arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);
    return 0;
}
