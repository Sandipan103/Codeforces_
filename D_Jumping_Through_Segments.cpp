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
#define allr(v) v.rbegin(), v.rend()
#define pii pair<int, int>
#define F first
#define S second
#define pll pair<ll, ll>
#define pci pair<char, int>
#define f(i, s, e)  for(ll i=s; i<e; i++)
#define fr(i, e, s)  for(ll i=e; i>=s; i--)
#define yy cout << "YES\n"
#define nn cout << "NO\n"
ll mod = 1e9+7;

ll mul(ll a, ll b)  {return ((a%mod) *1ll* (b%mod)) %mod;}
ll gcd(ll a, ll b)   {return __gcd(a, b); }
ll lcm(ll a, ll b)  {ll g = gcd(a%mod, b%mod); return (a*1ll*b)/g;}


bool isPossible(vector<pll> &v, ll x)    {
    ll s = 0, e = 0;
    f(i, 0, v.size())   {
        ll mini = s - x, maxi = e + x;
        if(v[i].F > maxi || v[i].S < mini)      return false;
        s = max(mini, v[i].F);
        e = min(maxi, v[i].S);
    }
    return true;
}


void Sandipan()    {
    
    ll n;
    cin >> n;
    vector<pll> v(n);
    ll s = 0, e = 0, ans = 0;
    f(i, 0, n)  cin >> v[i].F >> v[i].S, e = max({e, v[i].F, v[i].S});
    ans = e;

    while(s <= e)   {
        ll mid = s + (e - s) / 2;
        if(isPossible(v, mid))  ans = mid, e = mid - 1;
        else    s = mid + 1;
    }
    cout << ans << endl;
    
}



int main()  {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}