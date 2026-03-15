#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    /* code */
    string n;
    int b;

    cin >> n >> b;

    auto to_num = [](char c) -> int
    {
        if (isdigit(c)) return c - '0';
        return c - 'A' + 10;
    };

    long long ans = 0;
    long long power = 1;

    for (auto it = n.rbegin(); it != n.rend(); ++it) {
        char c = *it;
        ans += static_cast<long long>(to_num(c)) * power;
        power *= b;
    }

    cout << ans;

    return 0;
}