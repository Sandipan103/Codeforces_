#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define pb push_back
#define pob pop_back
#define vi vector<int>
#define vvi vector<vi>
#define vc vector<char>
#define vvc vector<vc>
#define vl vector<ll>
#define vvl vector<vl>
#define vs vector<string>
#define vvs vector<vs>
#define vb vector<bool>
#define vvb vector<vb>
#define all(v) v.begin(), v.end()
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pci pair<char, int>
#define f(i, s, e)  for(int i=s; i<e; i++)
#define fr(i, e, s)  for(int i=e; i>=s; i--)
#define yy cout << "YES\n"
#define nn cout << "NO\n"
ll mod = 1e9+7;

ll mul(ll a, ll b)  {return ((a%mod) *1ll* (b%mod)) %mod;}
int gcd(int a, int b)   {return __gcd(a, b); }
ll lcm(ll a, ll b)  {ll g = gcd(a%mod, b%mod); return (a*1ll*b)/g;}


vvi dir = {{1,0}, {-1,0}, {0,1}, {0,-1}};
ll n, m;

ll dfs(ll i, ll j, vvl &v)    {
    ll ans = v[i][j];
    v[i][j] = 0;
    for(auto it : dir)  {
        ll nr = i + it[0], nc = j + it[1];
        if(nr >= 0 && nr < n && nc >= 0 && nc < m && v[nr][nc] > 0)
            ans += dfs(nr, nc, v);
    }
    return ans;
}

void Sandipan()    {
    
    cin >> n >> m;
    vvl v(n, vl(m, 0));
    f(i, 0, n)  f(j, 0, m)  cin >> v[i][j];
    ll ans = 0;
    f(i, 0, n)  f(j, 0, m)
        if(v[i][j] > 0)  ans = max(ans, dfs(i, j, v));
    cout << ans << endl;
    
}



int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}