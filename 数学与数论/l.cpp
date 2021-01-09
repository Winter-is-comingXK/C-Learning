#include<iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    long long n;
    while (a--) {
        cin>>n;
        if (n>=1&&n<=2){cout<<n<<endl;continue;}
        cout<<(n%2?n*(n-1)*(n-2):n%3?n*(n-1)*(n-3):(n-1)*(n-2)*(n-3))<<endl;
    }
}