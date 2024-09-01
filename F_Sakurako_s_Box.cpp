#include <bits/stdc++.h>
using namespace std;


#define ll long long int
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



ll power(ll x, ll y)
{
    ll temp;
    if(y == 0)  return 1;
    temp = power(x, y / 2);
    if(y % 2 == 0)
        return mul(temp, temp);
    return mul(x,mul(temp, temp));
}


void Sandipan()    {

    ll n, ans = 0, total = 0;
    cin >> n;
    vl v(n);
    f(i, 0, n)  cin >> v[i], total += v[i];
    f(i, 0, n)  {
        total -= v[i];
        ans = (ans%mod + 0ll + mul(v[i], total)%mod) % mod;
    }

    ll temp;
    if(n%2 == 0)    temp = mul(n/2, n-1);
    else    temp = mul(n, (n-1)/2);
    
    temp = power(temp, mod -2);
    ans = mul(ans, temp);
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