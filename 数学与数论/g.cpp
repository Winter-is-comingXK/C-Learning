#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int a, b, d;
    cin >> d;
    while (d--) {
        cin >> a >> b;
        int c = __gcd(a, b);
        cout << c << " " << a * b / c << endl;
    }
}