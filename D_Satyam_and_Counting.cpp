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
    
    ll n, count = 0;
    cin >> n;
    vvl v(n, vl(2));
    f(i, 0, n)  f(j, 0, 2)  cin >> v[i][j];
    sort(all(v));
    f(i, 1, n)
        if(v[i][0] == v[i-1][0])    count++;
    count = count * 1ll * (n-2);
    unordered_set<ll> one, zero;
    f(i, 0, n)
        if(v[i][1] == 1)    one.insert(v[i][0]);
        else    zero.insert(v[i][0]);
    for(auto it : one)
        if(zero.find(it-1) != zero.end() && zero.find(it+1) != zero.end())  count++;
    for(auto it : zero)
        if(one.find(it-1) != one.end() && one.find(it+1) != one.end())  count++;
    cout << count << endl;
    
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