#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    /* code */  
    int n,k;
    cin>>n>>k;

    vector<int> coins(n);

    for (int &x:coins) cin>>x;
    
    reverse(coins.begin(),coins.end());

    int cnt=0;

    for (int coin:coins){
        if (k==0)break;
        cnt+=k/coin;
        k%=coin;
        /* code */
    }
    cout<<cnt;
    
    return 0;
}