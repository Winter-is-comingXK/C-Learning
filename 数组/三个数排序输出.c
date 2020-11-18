#include<stdio.h>

int main(){
    int arr[3];
    scanf("%d%d%d",&arr[0],&arr[1],&arr[2]);
    for(int a=1;a<=2;a++){
    for(int i=0;i<2;i++){
        int x1=arr[i];
        int x2=arr[i+1];
        if (x1>x2){
        arr[i]=x2,arr[i+1]=x1;}
    }
        
    }
    
    
    printf("%d %d %d",arr[0],arr[1],arr[2]);
    return 0;
}
