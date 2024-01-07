#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define lli long long int
#define pb push_back
#define pob pop_back
#define vi vector<int>
#define vvi vector<vi>
#define vc vector<char>
#define vvc vector<vc>
#define vl vector<ll>
#define vvl vector<vl>
#define vli vector<lli>
#define vvli vector<vli>
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
vi prime;

void sieve()    {
    vb v(1e6+2, true);
    v[0] = false, v[1] = false;
    f(i, 2, 1e6+2)  {
        if(v[i])
            for(int j=2*i; j<1e6+2; j+=i)   v[j] = false;
    }
    f(i, 2, 1e6+2)  if(v[i])    prime.push_back(i);
}

double power(double x, long long n) {
    double ans = 1;
    while(n)    {
        if(n&1) ans = ans * x;
        x = x * x;
        n >>= 1;
    }
    return ans;
}

void fun(lli x, unordered_map<lli, lli>& mp)    {
    lli i=0;
    while(x>1)  {
        while(x%prime[i]==0)   x /= prime[i], mp[prime[i]]++;
        i++;
    }
}


void Sandipan()    {
    // ios::sync_with_stdio(true);
    // cin.tie(NULL);
    ll n; 
    cin >> n;
    vli v(n);
    f(i, 0, n)  cin >> v[i];
    
    sieve();
    unordered_map<lli, lli> mp;
    f(i, 0, n)
        fun(v[i], mp);
    for(auto it : mp)
        if((it.second%n)) {
            nn;
            return;
        }
    yy;
}



int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}

/*

30 50 27 20
810000
900
30
50*(3/5)
27*(10/9)
20*(3/2)

100 2 50 10 1
100000
10

75 40
3000

4 4

2 3 1
6


*/