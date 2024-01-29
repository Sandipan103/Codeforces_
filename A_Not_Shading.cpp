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




bool checkRow(vvc &v, int n, int m, int r)  {
    f(i, 0, m)  if(v[r][i] == 'B')  return true;
    return false;
}
bool checkColumn(vvc &v, int n, int m, int c)   {
    f(i, 0, n)  if(v[i][c] == 'B')  return true;
    return false;
}
bool blackPresent(vvc &v, int n, int m) {
    f(i, 0, n)  f(j, 0, m)
        if(v[i][j] == 'B')   return true;
        return false;
}


void Sandipan()    {
    
    int n, m, r, c;
    cin >> n >> m >> r >> c;
    vvc v(n,vc(m));
    f(i, 0, n)  f(j, 0, m)  cin >> v[i][j];
    r--, c--;
    int ans = -1;
    if(v[r][c] == 'B')  ans = 0;
    else if(checkRow(v, n, m, r))   ans = 1;
    else if(checkColumn(v, n, m, c))    ans = 1;
    else if(blackPresent(v, n, m))  ans = 2;

    cout << ans << endl;
    
}



int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}