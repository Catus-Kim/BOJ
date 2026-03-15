#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    /* code */  
    int n;
    cin>>n;

    vector<pair<int,int>> points(n);
    for (auto& [x,y]:points) cin>>x>>y;
    sort(points.begin(),points.end());
    for (auto& [x,y]:points) cout<<x<<" "<<y<<"\n";
    
    return 0;
}