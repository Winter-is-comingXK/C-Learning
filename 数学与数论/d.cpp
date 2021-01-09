#include<iostream>
using namespace std;
int P[1000000] = {
    0
};
void Prime_list() {
    P[0] = P[1] = 1;
    for (int i = 2; i < 1000000; i++) {
        for (int j = i * 2; j < 1000000; j += i) {
            P[j] = 1;
        }
    }
}
int main() {
    int n;
    int i, cache;
    Prime_list();
    while (cin >> n) {
        for (i = 2; i <= n / 2; i++) {
            if (P[i] == 0 && P[n - i] == 0) {
                cache = i;
            }
        }
        cout << cache << " " << n - cache << endl;
    }
}
