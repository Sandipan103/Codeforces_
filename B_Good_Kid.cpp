#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void Sandipan()    {
    ll n, cnt = 0, x = 1;
    cin >> n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++)   {
        cin >> v[i];
        if(v[i] == 0)   cnt++;
        if(v[i])
        x = x * 1ll * v[i];
    }
    if(cnt>1)   {
        cout << "0\n";
        return;
    }
    if(cnt==1)  {
        cout << x << endl;
        return;
    }
    ll maxi = x;
    for(ll i=0; i<n; i++)   {
        ll temp = (x/v[i])*1ll*(v[i]+1);
        maxi = max(maxi, temp);
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