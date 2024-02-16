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




ll digSum(ll n) {
    ll s = 0;
    while(n)    s += n%10, n/=10;
    return s;
}



void Sandipan()    {
    
    ll n, c, mini = INT_MAX, minIndex = 0;
    cin >> n >> c;
    vl v(n+1), start(n+1), end(n+1), temp;
    f(i, 1, n+1)    {
        cin >> v[i];
        start[i] = v[i]+i;
        end[i] = v[i]+n+1-i;
        cout << start[i] << ", " << end[i] << endl;
        if(start[i] < mini) mini = start[i], minIndex = i;
        temp.push_back(min(start[i], end[i]));
    }
    sort(all(temp));
    ll s = 0, ans = 0;
    f(i, 0, temp.size())  {
        s += temp[i];
        if(s <= c)  ans++;
        else    break;
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
