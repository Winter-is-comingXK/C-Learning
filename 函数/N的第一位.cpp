//抄来的
#include<bits/stdc++.h>
#include<cmath>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long a;
    while (n--) {
        cin >> a;
        if (a == 0) {
            cout << 0 << endl;
            continue;
        }
        int t = 0;
        if (log(a) < 1) {
            cout << a << endl;
            break;
        }
        for (long long i = 10;; i *= 10) {
            t = a / i;
            if (log10(t) < 1) {
                cout << t << endl;
                break;
            }
        }
    }
    return 0;
}