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





void Sandipan()    {
    
    int n, k, x;
    cin >> n >> k >> x;
    vl v(n);
    f(i, 0, n)  cin >> v[i];

    sort(all(v));
    vl pref(n, 0);
    pref[0] = v[0];
    f(i, 1, n)  pref[i] = v[i] + pref[i-1];

    ll temp = 0;
    for(int i=n-x; i<n; i++)    temp += v[i];
    ll maxi = pref[n-1] - 2*temp;

    for(int i=1; i<=k; i++)  {
        ll currTotal = 0;
        if(n-1-i >= 0)
            currTotal = pref[n-1-i];
        temp -= v[n-i];
        if(n-i-x >= 0)
        temp += v[n-i-x];
        maxi = max(maxi, currTotal - 2*temp);
    }

    cout << maxi << endl;
    
}



int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}