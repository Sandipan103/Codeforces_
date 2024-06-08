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
    
    ll n, k, b, s;
    cin >> n >> k >> b >> s;
    vl p(n), a(n);
    f(i, 0, n)  cin >> p[i], p[i]--;
    f(i, 0, n)  cin >> a[i];
    b--, s--;
    ll bCnt = 0, sCnt = 0, prev = 0;
    vb vis(n, false);
    f(i, 0, k)  {
        if(vis[b])  break;
        vis[b] = true;
        bCnt = max(bCnt, prev + a[b] * (k-i));
        prev += a[b];
        b = p[b];
    }
    prev = 0;
    f(i, 0, n)  vis[i] = false;
    f(i, 0, k)  {
        if(vis[s])  break;
        vis[s] = true;
        sCnt = max(sCnt, prev + a[s] * (k-i));
        prev += a[s];
        s = p[s];
    }
    if(bCnt == sCnt)        
        cout << "Draw" << endl;
    else if(bCnt > sCnt)    
        cout << "Bodya" << endl;
    else                    
        cout << "Sasha" << endl;

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