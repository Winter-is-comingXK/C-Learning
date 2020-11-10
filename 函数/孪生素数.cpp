#include<iostream>

using namespace std;
int a[1000000] = {0};

void prime_list() {
    a[0] = a[1] = 1;
    for (int i = 2; i < 1000000; i++) {
        for (int j = i * 2; j < 1000000; j += i) { a[j] = 1; }
    }
}

int main() {
    int N, count = 0;
    prime_list();
    scanf("%d", &N);
    for (int i = 2; i <= N; i++) {
        if (a[i] == 0 && (a[i - 1] == 0 || a[i - 2] == 0)) { count++; }
    }

    printf("%d\n", count);
}
