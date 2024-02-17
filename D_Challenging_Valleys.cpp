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
#define f(i, s, e)  for(ll i=s; i<e; i++)
#define fr(i, e, s)  for(ll i=e; i>=s; i--)
#define yy cout << "YES\n"
#define nn cout << "NO\n"
ll mod = 1e9+7;

ll mul(ll a, ll b)  {return ((a%mod) *1ll* (b%mod)) %mod;}
int gcd(int a, int b)   {return __gcd(a, b); }
ll lcm(ll a, ll b)  {ll g = gcd(a%mod, b%mod); return (a*1ll*b)/g;}





void Sandipan()    {
    
    ll n, cnt = 0;
    cin >> n;
    vl v(n), temp;
    f(i, 0, n)  cin >> v[i];
    temp.pb(v[0]);
    f(i, 1, n)  
        if(temp.back() != v[i])
            temp.pb(v[i]);
    n = temp.size();
    if(n < 3)  {
        yy;
        return;
    }
    if(temp[0] < temp[1]) cnt++;
    if(temp[n-1] < temp[n-2]) cnt++;
    f(i, 1, n-1)    if(temp[i] < temp[i-1] && temp[i] < temp[i+1])  cnt++;
    if(cnt <= 1)    yy;
    else    nn;
}

    

int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}