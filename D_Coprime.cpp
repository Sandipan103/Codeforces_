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
    
    int n, x, maxi=-1;
    cin >> n;
    vi v(1002, -1);
    f(i, 1, n+1)  cin >> x, v[x] = i;

    f(i, 1, 1002)   {
        if(v[i]==-1)    continue;
        f(j, i, 1002)  {
            if(v[j]==-1)    continue;
            if( __gcd(i, j)==1)
                maxi = max(maxi, v[i]+v[j]);
        }
    }

    cout << maxi << endl;
    
}



int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}