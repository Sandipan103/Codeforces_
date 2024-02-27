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


void Sandipan()    {
    
    ll n, m;
    cin >> n >> m;
    vl a(n), b(m);
    f(i, 0, n)  cin >> a[i];
    f(i, 0, m)  cin >> b[i];
    sort(all(a));
    sort(all(b));
    ll sum = 0, s = 0, e = m-1, i = 0, j = n-1;

    cout << "printing a" << endl;
    print(a);
    cout << "printing b" << endl;
    print(b);

    while(i <= j)   {
        if(abs(a[i] - b[e]) >= abs(a[j] - b[s]))
            sum += abs(a[i++] - b[e--]);
        else
            sum += abs(a[j--] - b[s++]);
    }

    cout << sum << endl;
    
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


/*

4 6 8 10 
10 9 8 6 3 1 
6 

*/