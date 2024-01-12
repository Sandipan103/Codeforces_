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
    
    string s;
    cin >> s;
    int zero = 0, one = 0, i = 0, n = s.length();
    for(auto it : s)
        if(it == '0')   zero++;
        else    one++;
        
    while(i < n)    {
        if(s[i] == '0') {
            if(!one)    break;
            else    one--;
        }
        else    {
            if(!zero)   break;
            else    zero--;
        }
        i++;
    }

    cout << n-i << endl;
    
}



int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}