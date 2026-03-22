#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    int count = 0;
    while (N--) {
        int x;
        cin >> x;
        if (isPrime(x)) count++;
    }

    cout << count;
    return 0;
}