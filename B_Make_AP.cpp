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
    
    int a, b, c, diff, req;
    cin >> a >> b >> c;
    if(a > c)   swap(a, c);
    bool f = false;

    // fix a, b and try to change c
    diff = b - a;
    req = b + diff;
    if(req >= c && req % c == 0)    f = true;

    // fix b, c  and try to change a
    diff = c - b;
    req = b - diff;
    if(req >= a && req % a == 0)    f = true;

    // fix a, c and try to change b
    diff = c - a;
    req = a + diff/2;
    if(diff % 2 == 0 && req >= b && req % b == 0) f = true;

    if(f)   yy;
    else    nn;
    
}



int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}