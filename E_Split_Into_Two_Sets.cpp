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



bool dfs(int u, vvi &adj, vi &color, int cl)  {
  color[u] = cl;
  for(auto it : adj[u]) {
    if(color[it] == cl) return true;
    if(color[it] != -1) continue;
    if(dfs(it, adj, color, !cl))
      return true;
  }
  return false;
}


void Sandipan()    {
    
  int n, a, b;
  cin >> n;
  vvi adj(n);
  bool f = true;

  f(i, 0, n)  {
    cin >> a >> b;
    a--, b--;
    adj[a].pb(b);
    adj[b].pb(a);
    if(adj[a].size() > 2 || adj[b].size() > 2)  
      f = false;
  }

  if(!f)  {
    nn;
    return;
  }

  vi color(n, -1);
  f(i, 0, n)  {
    if(color[i] != -1)  continue;
    if(dfs(i, adj, color, 0))  {
      nn;
      return;
    }
  }

  yy;

}



int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}
