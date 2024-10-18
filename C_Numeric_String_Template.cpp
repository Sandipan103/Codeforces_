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
    
    ll n, m;
    cin >> n;
    vl v(n);
    f(i, 0, n)  cin >> v[i];
    cin >> m;
    f(i, 0, m)  {
        string s;
        cin >> s;
        if(s.length() != n)     {
            nn;
            continue;
        }
        unordered_map<char, int> ci;
        unordered_map<int, char> ic;
        f(j, 0, n)  {
            if(ci.find(s[j]) != ci.end() && ci[s[j]] != v[j])   {
                nn;
                j = n+1;
            }
            if(ic.find(v[j]) != ic.end() && ic[v[j]] != s[j])   {
                nn;
                j = n+1;
            }
            ci[s[j]] = v[j];
            ic[v[j]] = s[j];
            if(j == n-1)    yy;
        }
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