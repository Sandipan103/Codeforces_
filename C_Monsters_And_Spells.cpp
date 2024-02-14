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
ll findSumFromOne(ll x)    {return (x*1ll*(x+1)) / 2;}


void Sandipan()    {
    
    ll n, ans, prev;
    cin >> n;
    vl time(n), health(n);
    f(i, 0, n)  cin >> time[i];
    f(i, 0, n)  cin >> health[i];
    ans = findSumFromOne(health[0]);
    prev = ans;

    f(i, 1, n)  {
        ll timeDiff = time[i] - time[i-1];
        if(health[i] <= timeDiff)   {   // we can start from one
            ans += findSumFromOne(health[i]);
        }
        else    {   // we have to continue from the last one
            health[i] = timeDiff + health[i-1];
            ans += findSumFromOne(health[i]) - findSumFromOne(health[i-1]);
        }
    }

    cout << ans << endl;    
    
}



int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}