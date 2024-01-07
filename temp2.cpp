#include <bits/stdc++.h>
using namespace std;

int solveMem(string& s, string& tar, int i, int j, vector<vector<int>>& dp) {
    if(i >= s.length()) return tar.length() - j;
    if(j >= tar.length())   return s.length() - i;
    if(dp[i][j] != -1)  return dp[i][j];
    if(s[i] == tar[j])  return dp[i][j] = solveMem(s, tar, i+1, j+1, dp);
    int deletion = solveMem(s, tar, i+1, j, dp);
    int insertion = solveMem(s, tar, i, j+1, dp);
    int replace = solveMem(s, tar, i+1, j+1, dp);
    return dp[i][j] = 1 + min({deletion, insertion, replace});
}

int levenDis(string& s, string& tar)  {
    int n = s.length(), m = tar.length();
    vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
    return solveMem(s, tar, 0, 0, dp);
}

void solve(int n, vector<string>& v, string& target)    {
    unordered_map<string, int> mp;
    string ans = v[0];
    int mini = INT_MAX;
    for(auto &it : v)   {
        mp[it] = levenDis(it, target);
        // cout << it << " : " << mp[it] << " " << target << endl;
        if(mp[it]<mini)     mini = mp[it], ans = it;
        else if(mp[it] == mini && it < ans) ans = it;
    }
    cout << ans << endl;
}

int main()  {
    int n;
    cin >> n;
    vector<string> v(n);
    string tar;
    for(int i=0; i<n; i++)  cin >> v[i];
    cin >> tar;
    solve(n, v, tar);
}