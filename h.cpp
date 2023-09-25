#include <bits/stdc++.h>
using namespace std;


int dfs(int i, int j, int take, int n, int m, int k, vector<vector<int>>& v) {
    if(take > m)    return 0;
    int x = i, ans = v[i][j], minInd = max(0, x - k), maxInd = min(n-1, x + k), maxi = 0;

    for(int i=minInd; i<maxInd; i++)  {
        for(int j=0; j<m; j++)  {
            if(v[i][j] >= minInd && v[i][j] <= maxInd)
                maxi = max(maxi, dfs(i, j, take + 1, n, m, k, v));
        }
    }

    return ans + maxi;
}

int main()  {
    int n, m, k, maxi = 0;
    cin >> n >> m >> k;
    vector<vector<int>> v(n, vector<int>(m));
    for(int i=0; i<n; i++)  for(int j=0; j<m; j++)  cin >> v[i][j];
    for(auto &it : v)   sort(it.begin(), it.end());

    for(int i=0; i<n; i++)  
        maxi = max(maxi, dfs(i, 0, 0, n, m, k, v));    // row, col, take
    
    cout << maxi << endl;
}