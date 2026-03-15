#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    /* code */  
    int N, sum, cur=0, total=0;
    cin>>N;
    vector<int> times(N);
    for (int &x : times) cin>>x;
    sort(times.begin(),times.end());
    for (int x : times){
        cur+=x;
        total+=cur;
    }
    cout<<total;

    return 0;
}