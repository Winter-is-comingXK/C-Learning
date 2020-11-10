//抄来的

#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
    long long int m,n,a,b; 
    while(cin>>m>>n) { a=1; b=1; 
    int temp=m-n; 
    if(temp<n) n=temp; 
    for(int i=1;i<=n;i++) { 
        a=a*i; b=b*m; m--; } 
        cout<<b/a<<endl; } 
    }