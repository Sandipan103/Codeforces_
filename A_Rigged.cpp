#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pll pair<ll, ll>

void Sandipan()    {
    
    ll n;
    cin >> n;
    vector<pll> v(n);
    for(ll i=0; i<n; i++)   cin >> v[i].first >> v[i].second;
    bool flag = false;

    for(int i=1; i<n; i++)  if(v[i].first >= v[0].first && v[i].second >= v[0].second)  flag = true;
    if(flag)    cout << "-1\n";
    else    cout << v[0].first << endl;
    
}



int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}