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

template<typename T>
void print(vector<T> &v)   {
    for(auto it : v)
        cout << it << " ";
    cout << endl << "------------" << endl;
}

template<typename T>
void print2d(vector<T> &v)   {
    for(auto it : v)    {
        for(auto x : it)
            cout << x << " ";
        cout << endl;
    }
    cout << endl << "------------" << endl;
}





void Sandipan()    {
    
    ll n, q, l, r;
    cin >> n >> q;
    vl v(n), pref(n, 0), one(n, 0);
    f(i, 0, n)  cin >> v[i];
    pref[0] = v[0];
    one[0] = v[0]==1;
    f(i, 1, n)  pref[i] = pref[i-1] + v[i], one[i] = one[i-1] + (v[i] == 1);
    f(x, 0, q)  {
        cin >> l >> r;
        l--;
        r--;
        if(l == r)  {
            nn;
            continue;
        }
        ll oneCnt = one[r] - (l > 0 ? one[l-1] : 0);
        ll total = pref[r] - (l > 0 ? pref[l-1] : 0);
        ll len = r - l + 1;
        ll extra = total - len;
        ll minOne = 0;
        if(extra < len) minOne = len - extra;
        // cout << total << " " << oneCnt << " " << len << " " << extra << " " << minOne << endl;
        if(minOne <= len - oneCnt)  yy;
        else    nn;
    }
    
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