#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<256)n+=256;
    n<<=16;
    n>>=16;
    n*=n;
    n<<=8;
    n>>=16;
    cout<<n<<endl;
}