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




bool solve(vi &v)  {
    priority_queue<int> pq;
    for(auto it : v)    pq.push(it);
    int n = v.size();
    while(!pq.empty())  {
        int fr = pq.top();
        pq.pop();
        if(fr < n)  return false;
        else if(fr == n)  n--;
        else    pq.push(fr / 2);
    }
    return !n;
}


void Sandipan()    {
    int n;
    cin >> n;
    vi v(n);
    f(i, 0, n)  cin >> v[i];
    bool f = solve(v);
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