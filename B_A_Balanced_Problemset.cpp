#include <bits/stdc++.h>
using namespace std;


#define ll long long

void Sandipan()    {
    
    ll x, n, maxi = 1;
    cin >> x >> n;
    if(n == 1)  {
        cout << x << endl;
        return;
    }

    for(ll i=2; i<=sqrt(x); i++)    {
        if(x%i == 0 && x/i >= n)
            maxi = max(maxi, i);
        if(x%i == 0 && i >= n)
            maxi = max(maxi, x/i);
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