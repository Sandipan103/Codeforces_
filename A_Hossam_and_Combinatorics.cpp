#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pob pop_back
#define vi vector<int>
#define vvi vector<vi>
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

    ll n, cnt=0, maxi=-1, mini=1e6, maxiCnt=0, miniCnt=0;
    cin >> n;
    vl v(n);
    f(i, 0, n)  cin >> v[i], maxi = max(maxi, v[i]), mini = min(mini, v[i]);

    if(maxi == mini) {
        cout << n*1ll*(n-1) << endl;
        return;
    }

    f(i, 0, n)  {
        if(v[i] == maxi)    maxiCnt++;
        if(v[i] == mini)    miniCnt++;
    }
    cout << 2*1ll*maxiCnt*1ll*miniCnt << endl;

}


int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}