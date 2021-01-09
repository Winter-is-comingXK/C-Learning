#include<iostream>
using namespace std;
long long a[26] = {1, 1};
int main() {
    int n;
    cin >> n;
    if (n > 25) {
        n = 25;
    }
    for (int i = 2; i <= n; i++) {
        a[i] = (i * a[i - 1]) % 1000000;
    }
    long long s = 0;
    for (int i = 1; i <= n; i++) {
        s = (s + a[i]) % 1000000;
    }
    cout << s;
}