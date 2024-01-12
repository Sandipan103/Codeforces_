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
    
    ll n, k, i = 1;
    cin >> n >> k;
    vl fv(n), lv(n);
    f(i, 0, n)  cin >> fv[i];
    f(i, 0, n)  cin >> lv[i];
    ll maxi = fv[0] + (k-1) * 1ll * lv[0], prev = fv[0];

    while(i < n && i < k)   {
        prev += fv[i];
        lv[i] = max(lv[i-1] , lv[i]);
        ll temp = prev + (k - 1 - i) * 1ll * lv[i];
        maxi = max(maxi, temp);
        i++;
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