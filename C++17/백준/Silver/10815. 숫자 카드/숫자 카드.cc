#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    /* code */  
    int n;
    cin>>n;
    unordered_set<int> cards;
    cards.reserve(n);

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        cards.insert(val);
    }

    int m;
    cin>>m;

    while (m--)
    {
        /* code */
        int tgt;
        cin>>tgt;
        cout<<(cards.count(tgt)?1:0)<<" ";
    }
    
    return 0;
}