#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int arr1[10]={1,2,6,4,2,2,4,2,8,8},
        arr2[20]={8,6,8,2,8,8,6,8,2,4,
                  4,8,4,6,4,4,8,4,6,8};
    int n;
    cin>>n;
    if (n<=10)cout<<arr1[n-1];
    else cout<<arr2[((n-10)-1)%20];
}