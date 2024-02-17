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



ll inversionCount(vl &v, ll n) {
    ll ans = 0, cnt = 0;

    f(i, 0, n)  {
        if(v[i] == 1)   cnt++;
        else    ans += cnt;
    }

    return ans;
}

void Sandipan()    {
    
    ll n, maxi = 0;
    cin >> n;
    vl v(n);
    f(i, 0, n)  cin >> v[i];
    maxi = inversionCount(v, n);
    vl temp = v;
    f(i, 0, n)  {
        if(temp[i] == 0)    {
            temp[i] = 1;
            break;
        }
    }
    maxi = max(maxi, inversionCount(temp, n));
    fr(i, n-1, 0)   {
        if(v[i] == 1)   {
            v[i] = 0;
            break;
        }
    }
    maxi = max(maxi, inversionCount(v, n));
    cout << maxi << endl;
}



int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}