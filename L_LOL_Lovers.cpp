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
    string s;
    cin >> s;
    int lcnt = 0, ocnt = 0;
    for(auto it : s)    {
        if(it == 'L')   lcnt++;
        else    ocnt++;
    }
    int cnt1 = 0, cnt2 = 0;
    f(i, 0, n-1)  {
        if(s[i] == 'L') cnt1++, lcnt--;
        else    cnt2++, ocnt--;
        if(cnt1 != lcnt && cnt2 != ocnt){
            cout << i+1 << endl;
            return;
        }
    }
    cout << "-1" << endl;
}



int main()  {
    
  Sandipan();

  return 0;
}