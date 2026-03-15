#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int seed;
    cin >> seed; //시드머니

    int b_cash = seed; //
    int b_cnt = 0;

    int t_cash = seed;
    int t_cnt = 0;
    int up_cnt = 0, down_cnt = 0;
    vector<int> prices(14);

    for (int &p : prices)
        cin >> p;

    int prev = prices[0];

    for (int p : prices)
    {
        if (b_cash >= p)
        {
            b_cnt += (b_cash / p);
            b_cash %= p;
        }
    }

    for (int p : prices)
    {
        if (p > prev)
        {
            up_cnt++;
            down_cnt = 0;
        }
        else if (p < prev)
        {
            down_cnt++;
            up_cnt = 0;
        }
        else
        {
            up_cnt = 0;
            down_cnt = 0;
        }

        if (up_cnt >= 3)
        {
            t_cash += t_cnt * p;
            t_cnt = 0;
        }
        else if (down_cnt >= 3)
        {
            t_cnt += t_cash / p;
            t_cash %= p;
        }
        prev = p;
    }

    int b_res = b_cash + b_cnt * prices.back();
    int t_res = t_cash + t_cnt * prices.back();

    if (b_res > t_res)
        cout << "BNP";
    else if (b_res < t_res)
        cout << "TIMING";
    else
        cout << "SAMESAME";
    return 0;
}