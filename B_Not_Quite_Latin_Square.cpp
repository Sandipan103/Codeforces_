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





void Sandipan()    {
    
  vvc v(3, vc(3));
  int index = 0;
  f(i, 0, 3)  f(j, 0, 3)  {
    cin >> v[i][j];
    if(v[i][j] == '?')  index = i;
  }
  set<char> st;
  st.insert(v[index].begin(), v[index].end());
  if(st.find('A') == st.end())  cout << "A" << endl;
  else if(st.find('B') == st.end())  cout << "B" << endl;
  else  cout << "C" << endl;
  
}



int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}