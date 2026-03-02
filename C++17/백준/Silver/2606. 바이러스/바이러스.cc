#include <bits/stdc++.h>
using namespace std;

vector<int> adj[101];
bool visited[101] = {0};
int cnt = 0;

void dfs(int u);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    /* code */
    int N, M;
    cin >> N >> M;

    for (int i = 0; i < M; i++)
    {
        /* code */
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    dfs(1);
    cout << cnt - 1;

    return 0;
}

void dfs(int u)
{
    visited[u] = 1;
    cnt++;

    for (int v : adj[u])
    {
        if (!visited[v])
        {
            dfs(v);
        }
    }
}