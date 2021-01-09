#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    int temp0, temp1;
    while (cin >> a >> b >> c) {
        temp0 = a / b;
        cout << temp0 << ".";
        a = (a - temp0 * b) * 10;
        while (c--) {
            temp0 = a / b;
            if (c > 0) {
                cout << temp0;
                a = (a - temp0 * b) * 10;
            }
            else {
                a = (a - temp0 * b) * 10;
                temp1 = a / b;
                if (temp1 > 5) {
                    cout << temp0 + 1 << endl;
                }
                else {
                    cout << temp0 << endl;
                }
            }
        }
    }
}
