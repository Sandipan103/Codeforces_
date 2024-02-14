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





void Sandipan()    {
    
    ll n;
    cin >> n;
    vl v(n);
    f(i, 0, n)  cin >> v[i];
    ll start = 0, end = 0;
    for(int i=0; i<n; i++)  {
        if(v[i] == v[0])    start++;
        else    break;
    }
    for(int i=n-1; i<n; i--)    {
        if(v[i] == v[n-1])  end++;
        else    break;
    }
    ll temp = 0;
    if(v[0] == v[n-1])  temp = start + end;
    ll maxi = max({start, end, temp});
    ll ans = n - maxi;
    if(ans < 0) ans = 0;
    cout << ans << endl;
    
}



int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}