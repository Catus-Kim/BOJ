#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    
    vector<int> nums(N);
    
    for (int &x : nums) cin>>x;
    sort(nums.begin(),nums.end());
    for (int x : nums) cout<<x<<"\n";
    
    return 0;
}