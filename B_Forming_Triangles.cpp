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
#define pci pair<char, int>
#define f(i, s, e)  for(int i=s; i<e; i++)
#define fr(i, e, s)  for(int i=e; i>=s; i--)
#define yy cout << "YES\n"
#define nn cout << "NO\n"
ll mod = 1e9+7;

ll mul(ll a, ll b)  {return ((a%mod) *1ll* (b%mod)) %mod;}
int gcd(int a, int b)   {return __gcd(a, b); }
ll lcm(ll a, ll b)  {ll g = gcd(a%mod, b%mod); return (a*1ll*b)/g;}


ll ncr(ll n, ll r)    {
    if(r > n)   return 0;
    if(r == n)  return 1;
    if(r == 2)  return (n * 1ll * (n-1)) / 2;
    return (n * 1ll * (n-1) * (n-2)) / 6;
}


void Sandipan()    {
    
    ll n, x, ans = 0;
    cin >> n;
    map<ll, ll> mp;
    f(i, 0, n)  {
        cin >> x;
        mp[x]++;
    }
    vl v;
    for(auto it : mp)   v.push_back(it.second);
    for(ll i = v.size()-1; i>=0; i--)   {
        n -= v[i];
        ans += ncr(v[i], 3) + ncr(v[i], 2) * n;
    }
    cout << ans << endl;
}



int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}