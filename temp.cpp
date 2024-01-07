#include <bits/stdc++.h>
using namespace std;

vector<int> solve(int n, int k, vector<int>& parent, vector<int>& earning)   {
    vector<int> vis(n, false), ans;
    for(int i=0; i<k; i++)  {
        int x = earning[i];
        while(parent[x] != -1 && !vis[parent[x]])   x = parent[x];
        vis[x] = true;
        ans.push_back(x);
    }
    return ans;
}

int main()  {

    int n, k;
    cin >> n >> k;
    vector<int> parent(n), earning(k);
    for(int i=0; i<n; i++)  cin >> parent[i];
    for(int i=0; i<k; i++)  cin >> earning[i];

    vector<int> ans = solve(n, k, parent, earning);
    for(auto it : ans)  cout << it << " ";
    cout << endl;

}