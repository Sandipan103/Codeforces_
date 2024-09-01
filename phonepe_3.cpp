#include<bits/stdc++.h>
using namespace std;

#define pii pair<int, int>

int s;

int dfs(int u, vector<vector<pii>> &adj, int parent)    {
    if(u == s)  return 0;

    for(auto it : adj[u])   {
        int v = it.first, c = it.second;
        if(v == parent) continue;
        if(c < 0)   return abs(c) + dfs(v, adj, u);
        else return dfs(v, adj, u);
    }

    return 0;
}

int main()  {
    int n;
    cin >> n;
    vector<vector<pii>> adj(n);
    vector<int> cnt(n, 0);

    for(int i=0; i<n; i++)  {
        int a, b, c;
        cin >> a >> b >> c;
        a--, b--;
        cnt[a]++;
        adj[a].push_back({b, c});
        adj[b].push_back({a, -c});
    }

    int u = -1;
    for(int i=0; i<n; i++)
        if(cnt[i] == 2) u = i;
    
    if(u == -1) {
        cout << "0" << endl;
        return 0;
    }

    s = u;
    int cost1 = dfs(adj[u][0].first, adj, u);
    int cost2 = dfs(adj[u][1].first, adj, u);
    cout << min(cost1, cost2) << endl;
    return 0;
    
}