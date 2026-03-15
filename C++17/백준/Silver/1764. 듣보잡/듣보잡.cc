#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    /* code */
    int N, M;
    cin >> N >> M;
    unordered_set<string> ns;
    vector<string> ans;
    string name;

    for (int i = 0; i < N; i++){
        cin>>name;
        ns.insert(name);
    }
    
    for (int i = 0; i < M; i++)
    {
        cin>>name;
        if (ns.find(name) != ns.end()) ans.push_back(name);
    }

    sort(ans.begin(),ans.end());
    cout<<ans.size()<<'\n';
    for( string p : ans) cout<<p<<'\n';    

    return 0;
}