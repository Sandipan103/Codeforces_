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
#define vvvl vector<vvl>
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



ll solve(ll a, ll b, ll c, vvvl &dp)  {
    if(a<0 || b<0 || c<0)   return 0;
    if(!a && !b && !c)  return 0;
    if(dp[a][b][c] != -1)   return dp[a][b][c];
    ll ans = 0;
    if((a&1) && (b&1) && (c&1))     
        ans = 1 + max({solve(a-1, b, c, dp), solve(a, b-1, c, dp), solve(a, b, c-1, dp)});
    else if(!(a&1) && !(b&1) && !(c&1))
        ans = 1 + max({solve(a-1, b, c, dp), solve(a, b-1, c, dp), solve(a, b, c-1, dp)});
    else
        ans = max({solve(a-1, b, c, dp), solve(a, b-1, c, dp), solve(a, b, c-1, dp)});
    return dp[a][b][c] = ans;
}


void Sandipan()    {
    
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll ans = 0;
    // if(d)   ans += d/2;
    // vvvl dp(a+1, vvl(b+1, vl(c+1, -1)));
    // ans += solve(a, b, c, dp);
    ans = a/2 + b/2 + c/2 + d/2;
    if((a&1) && (b&1) && (c&1)) ans++;
    cout << ans << endl;
    
}

/*
001
010
011
100

2 2 2
2 2 0
2 0 0


*/



int main()  {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}