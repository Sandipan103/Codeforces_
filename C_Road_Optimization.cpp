#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<ll>
#define vvl vector<vl>
#define pll pair<ll, ll>


ll solve(ll i, ll k, vector<pll> &v, ll n, vvl &dp)  {
  if(i == n)  return 0;
  if(dp[i][k] != -1)  return dp[i][k];
  ll ans = LONG_MAX;
  for(int j=i+1; j<=n; j++) {
    if(j - i - 1 > k) break;
    ans = min(ans, (v[j].first - v[i].first) * v[i].second + solve(j, k-(j-i-1), v, n, dp));
  }
  return dp[i][k] = ans;
}


void Sandipan()    {
    
    ll n, l, k;
    cin >> n >> l >> k;
    vector<pll> v(n+1);
    for(ll i=0; i<n; i++)  cin >> v[i].first;
    for(ll i=0; i<n; i++)  cin >> v[i].second;
    v[n].first = l; v[n].second = 0;
    vvl dp(n+2, vl(n+2, -1));
    ll ans = (n==1) ? (l*v[0].second) : (solve(0, k, v, n, dp));
    cout << ans << endl;
}



int main()  {

    Sandipan();
  
  return 0;
}