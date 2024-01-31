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
    
    ll a, b, x, temp, msb = 0;
    cin >> a >> b >> x;
    if(a < b)   swap(a, b);
    temp = x;
    bool tight = 1;

    // find the msb of x
    while(temp) {
        msb++;
        temp >>= 1;
    }
    msb--;
    // cout << "msb : " << msb << endl;
    
    for(ll i=msb; i>=0; i--)    {
        ll aBit = (a&(1ll<<i)) > 0 ? 1 : 0, bBit = (b&(1ll<<i)) > 0 ? 1 : 0, xBit = (x&(1ll<<i)) > 0 ? 1 : 0;

        // cout << "i : " << i << " " << aBit << " " << bBit << " " << xBit << endl;
        if(aBit == bBit)    {
            if(xBit)    tight = false;
        }
        else if(aBit == 0 && bBit == 1) {
            if(xBit)    tight = false;
        }
        else    {
            if(xBit == 0 && !tight) {
                ll a1 = a^(1ll<<i);
                ll b1 = b^(1ll<<i);
                if(a1 >= b1) {
                    a = a1, b = b1;
                }
            }
            else if(xBit == 1)  {
                ll a1 = a^(1ll<<i);
                ll b1 = b^(1ll<<i);
                if(a1 >= b1)    {
                    a = a1, b =b1;
                }
                else    tight = false;
            }
        }
    }

    cout << abs(a - b) << endl;
    
}



int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}