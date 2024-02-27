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
    
    ll n, q, l, r;
    cin >> n;
    vl v(n), pref(n);
    f(i, 0, n)  cin >> v[i];
    pref[0] = -1;
    ll prev = -1;
    f(i, 1, n)  {
      if(v[i] == v[i-1])  pref[i] = prev;
      else  pref[i] = i-1, prev = i-1;
    }

    // cout << "pringing pref" << endl;
    // f(i, 0, n)  cout << pref[i] << " ";
    // cout << endl;

    cin >> q;
    f(i, 0, q)  {
      cin >> l >> r;
      l--, r--;
      if(pref[r] < l)
        cout << "-1 -1" << endl;
      else  cout << pref[r]+1 << " " << r+1 << endl;
    }
    cout << endl;
}



int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}