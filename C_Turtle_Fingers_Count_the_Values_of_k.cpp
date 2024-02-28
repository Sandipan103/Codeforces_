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


void Sandipan()    {
    
    ll a, b, s;
    cin >> a >> b >> s;
    if(a < b)   swap(a, b);
    set<ll> v1, v2;
    ll temp = 1, cnt = 1;
    while(temp <= s)    {
        v1.insert(temp);
        temp *= a;
    }
    temp = 1;
    while(temp <= s)    {
        v2.insert(temp);
        temp *= b;
    }
    set<ll> st;

    for(auto x : v1) 
        for(auto y : v2) 
            if(x*y <= s && s%(x*y) == 0)
                st.insert(s/(x*y));

    cout << st.size() << endl;
    
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