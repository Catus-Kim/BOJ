#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;

    int cnt = 0;
    
    int five = n / 5;

    while (five >= 0) {
        int remain = n - (five * 5);
        if (remain % 2 == 0) {
            cout << five + (remain / 2);
            return 0;
        }
        five--;
    }
    cout << -1;
    return 0;
}