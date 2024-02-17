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





void Sandipan()    {
    
    string s, ans = "";
    cin >>s;
    stack<pair<int, char>> us, ls;
    for(int i = 0; i<s.length(); i++)    {
        if(s[i] == 'B')    {
            if(!us.empty())
                us.pop();
        }
        else if(s[i] == 'b')  {
            if(!ls.empty())
                ls.pop();
        }
        else if(s[i] >= 'a' && s[i] <= 'z')
            ls.push({i, s[i]});
        else 
            us.push({i, s[i]});
    }
    vector<pair<int, char>> v;
    while(!us.empty())  v.push_back(us.top()), us.pop();
    while(!ls.empty())  v.push_back(ls.top()), ls.pop();
    sort(all(v));
    for(auto it : v)
        ans.pb(it.second);
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