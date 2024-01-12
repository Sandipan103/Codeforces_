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
    
    int n;
    cin >> n;
    vector<int> v(32, 0);
    f(i,0,n)    {
        int type, x;
        cin >> type >> x;
        if(type == 2)   {
            vector<int> bit(32, 0);
            f(j, 0, 32)
                if(x & (1<<j))  bit[j]++;
            int req = 0;
            for(int i=31; i>=0; i--)    {
                req *= 2;
                if(bit[i])  req++;
                if(v[i] >= req) req = 0;
                else    req -= v[i];
            }

            if(req) cout << "NO" << endl;
            else    cout << "YES" << endl;
        }
        else    {
            v[x]++;
        }
    }
    
}



int main()  {

    Sandipan();
  
  return 0;
}