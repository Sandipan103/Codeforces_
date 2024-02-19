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





vl findPermutation(vl &v, ll l, ll r)  {
    ll n = v.size();
    vl ans;
    f(i, r+1, n)  ans.pb(v[i]);
    fr(i, r, l) ans.pb(v[i]);
    f(i, 0, l)  ans.pb(v[i]);
    return ans;
}

void Sandipan()    {
    
    ll n;
    cin >> n;
    vl v(n), ans(n);
    f(i, 0, n)  cin >> v[i], ans[i] = v[i];
    sort(all(ans));
    ll maxIndex = max_element(all(v)) - v.begin();
    if(maxIndex == 0)   
    f(i, 0, n)
        if(v[i] == n-1)    maxIndex = i;
    
    f(i, 0, maxIndex) {
        vl temp = findPermutation(v, i, maxIndex-1);
        ans = max(ans, temp);
    }
    ans = max(ans, findPermutation(v, maxIndex, maxIndex));

    for(auto it : ans)  cout << it << " ";
    cout << endl;
    
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