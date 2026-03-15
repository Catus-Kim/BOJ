#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> x_pos(3);
    for(int &x : x_pos ){
        cin>>x;
    }
    int l_gap=x_pos[1]-x_pos[0]-1, r_gap=x_pos[2]-x_pos[1]-1;
    cout << max(l_gap,r_gap);
    return 0;
}