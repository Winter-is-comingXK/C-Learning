//抄来的

#include <bits/stdc++.h> 
#include <string.h> 
#include <cmath> 
using namespace std; 
int main(){ 
    int i,a,b,j,t,s,k; 
    while(cin >> a >> b){ 
        for(i=a; i<=b&&i<=9989899; i++){ 
            k=1; 
            s=0; 
            t=i; 
            while(t){
                s=s*10+t%10; t=t/10; 
            } 
            if(s==i){
                for(j=2; j<=sqrt(i); j++){ 
                    if(i%j==0){
                        k=0; 
                        break; 
                    } 
            } 
                if(k==1) 
                    cout << i << endl;
            } 
        } 
        cout << endl;
    } 
    return 0; 
}