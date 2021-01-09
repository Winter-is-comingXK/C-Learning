#include <iostream>

using namespace std;

int main() {
    long long c, b, a, n, m;
    cin >> a;
    while (a--) {
        cin >> n >> m;
        b = n % m, c = n / m;
        cout << m * (m - 1) / 2 * c + b * (b + 1) / 2 << "\n";
    }
}