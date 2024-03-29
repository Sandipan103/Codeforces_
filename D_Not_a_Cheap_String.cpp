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
    
    string s;
    int k, total = 0;
    cin >> s >> k;
    int n = s.length();
    priority_queue<pii> pq;
    f(i, 0, n)  {
        total += (s[i] - 'a' + 1);
        pq.push({s[i] - 'a' + 1, i});
    }
    while(total > k)    {
        total -= pq.top().first;
        pq.pop();
    }
    vi index(n, 0);
    while(!pq.empty())  {
        index[pq.top().second] = 1;
        pq.pop();
    }
    string ans = "";
    f(i, 0, n)
        if(index[i])    ans.pb(s[i]);
    cout << ans << endl;
}



int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}