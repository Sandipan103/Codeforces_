#include <bits/stdc++.h>
using namespace std;


#define ll long long
ll mod = 1e9+7;

int gcd(int a, int b)   {return __gcd(a, b); }
ll lcm(ll a, ll b)  {ll g = gcd(a%mod, b%mod); return (a*1ll*b)/g;}





void Sandipan()    {
    
    ll a, b;
    cin >> a >> b;
    ll z = lcm(a, b);
    if(z != max(a, b))  
        cout << z << endl;
    else
        cout << z * 1ll * (z/min(a, b)) << endl;
        
}



int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}