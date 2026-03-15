#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    int a, b, c;
    cin >> a >> b >> c;

    int res = a * b * c;
    string s = to_string(res);
    int cnt[10] = {0};

    for (char digit : s) {
        cnt[digit - '0']++;
    }
    for (int i = 0; i < 10; i++) {
        cout << cnt[i] << endl;
    }
    
    return 0;
}