#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    /* code */
    int h, w;
    cin >> h >> w;

    vector<int> height(w);
    for (int &x : height)
        cin >> x;

    vector<int> l_max(w);
    inclusive_scan(height.begin(), height.end(), l_max.begin(), [](int a, int b)
                   { return max(a, b); });

    vector<int> r_max(w);
    inclusive_scan(height.rbegin(), height.rend(), r_max.rbegin(), [](int a, int b)
                   { return max(a, b); });

    long long total_water = 0;

    for (int i = 0; i < w; ++i) total_water += min(l_max[i], r_max[i]) - height[i];

    cout << total_water;

    return 0;
}