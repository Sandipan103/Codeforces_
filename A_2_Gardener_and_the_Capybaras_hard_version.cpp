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
    
    string s;
    cin >> s;
    int n = s.length();

    // breaking point
    for(int i=1; i<n-1; i++)   {

        // total - a - 1  : n-i-1
        for(int j=1; j<=n-1-i; j++)   {
            string a = s.substr(0, i);
            string b = s.substr(i, j);
            string c = s.substr(i+j);
            // cout << "for i, j : " << i << " " << j << " => " << a << " " << b << " " << c << endl;
            if((b>=a && b>=c) || (b<=a && b<=c))    {
                cout << a << " " << b << " " << c << endl;
                return;
            }
        }

    }

    cout << ":(\n";

}


int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}