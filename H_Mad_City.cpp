#include <bits/stdc++.h>
using namespace std;

#define ll long long int

bool dfs(int n, int u, int parent, vector<vector<int>> &adj, vector<int>& vis, int b)   {
    // cout << "call for : " << u << endl;
    vis[u] = 1;
    for(auto it : adj[u])   {
        if(it == b && parent != b)  return true;
        if(vis[it]) continue;
        if(dfs(n, it, u, adj, vis, b))   return true;
    }
    return false;
}

void Sandipan() {
    int n, a, b;
    cin >> n >> a >> b;
    
    a--; b--;
    vector<vector<int>> adj(n);
    for(int i=0; i<n; i++)  {
        int u, v;
        cin >> u >> v;
        u--; v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    if(a==b)    {
        cout << "NO\n";
        return;
    }
    vector<int> vis(n, 0);
    if(dfs(n, b, -1, adj, vis, b)) cout << "YES\n";
    else    cout << "NO\n";
}


int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}