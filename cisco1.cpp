#include<bits/stdc++.h>
using namespace std;

void dfs(int u, vector<int> &vis, vector<vector<int>> &adj, unordered_map<int, int> &mp, int comp)  {
    vis[u] = 1;
    mp[u] = comp;

    for(auto v : adj[u])
        if(!vis[v])
            dfs(v, vis, adj, mp, comp);
}

vector<int> recoverDeadPods(int n, vector<vector<int>> &connections, vector<vector<int>> &queries)  {
    vector<int> ans, vis(n+1, 0);

    unordered_map<int, int> mp;
    vector<vector<int>> adj(n+1);

    for(auto it : connections)  {
        adj[it[0]].push_back(it[1]);
        adj[it[1]].push_back(it[0]);
    }

    int comp = 1;

    for(int i=1; i<=n; i++)  {
        if(vis[i])  continue;
        dfs(i, vis, adj, mp, comp);
        comp++;
    }

    vector<set<int>> v(comp);
    for(int i=1; i<=n; i++)  
        v[mp[i]].insert(i);
    
    for(auto &it : vis) it = 0;

    for(auto it : queries)  {
        int type = it[0], u = it[1];
        if(type == 2)   {
            if(v[mp[u]].find(u) != v[mp[u]].end())
                v[mp[u]].erase(u);
        }
        else    {
            if(v[mp[u]].size() == 0)
                ans.push_back(-1);
            else if(v[mp[u]].find(u) != v[mp[u]].end())
                ans.push_back(u);
            else
                ans.push_back((*v[mp[u]].begin()));
        }
    }

    return ans;
}

int main()  {
    int pods, n;
    cin >> pods >> n;
    vector<vector<int>> connections;
    for(int i=0; i<n; i++)  {
        int u, v;
        cin >> u >> v;
        connections.push_back({u, v});
    }
    int q;
    cin >> q;
    vector<vector<int>> queries;
    for(int i=0; i<q; i++)  {
        int t, u;
        cin >> t >> u;
        queries.push_back({t, u});
    }

    vector<int> ans = recoverDeadPods(pods, connections, queries);
    
    cout << "print ans : " << endl;
    for(auto it : ans)  
        cout << it << " ";
    cout << endl;
}