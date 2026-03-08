#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    /* code */
    int M;
    cin >> M;
    int S = 0;
    while (M--)
    {
        /* code */
        string cmd;
        cin >> cmd;
        if (cmd == "add")
        {
            int x;
            cin >> x;
            S |= (1 << x);
            /* code */
        }
        else if (cmd == "remove")
        {
            int x;
            cin >> x;
            S &= ~(1 << x);
            /* code */
        }
        else if (cmd == "check")
        {
            int x;
            cin >> x;
            cout << ((S & (1 << x)) ? 1 : 0) << '\n';
            /* code */
        }
        else if (cmd == "toggle")
        {
            int x;
            cin >> x;
            S ^= (1 << x);
            /* code */
        }
        else if (cmd == "all") S = (1 << 21) - 2;
        else if (cmd == "empty") S=0;
    }
    return 0;
}