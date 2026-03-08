#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    /* code */
    int N;
    long long M;
    cin >> N >> M;
    vector<int> tree(N);
    for (int i = 0; i < N; i++) cin >> tree[i];

    long long left = 0;
    long long right = *max_element(tree.begin(), tree.end());
    long long answer = 0;

    while (left <= right)
    {
        long long mid = left + (right - left) / 2;
        long long sum = 0;
        for (int h : tree)
        {
            if (h > mid)
                sum += h - mid;
        }

        if (sum >= M)
        {
            answer = mid;
            left = mid + 1;
        }
        else right = mid - 1;
    }
    cout << answer;
    return 0;
}