#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back

bool isPossible(vector<ll> &v, vector<ll> &pref, ll mid, ll w)  {
    ll ind = lower_bound(v.begin(), v.end(), mid) - v.begin();
    if(ind==0)  return true;
    ll req = (ind*1ll*mid) - pref[ind-1];
    return req <= w;
}


void Sandipan()    {
    
    ll n, w, x = 0;
    cin >> n >> w;
    vector<ll> v(n), pref(n, 0);
    for(ll i=0; i<n; i++)  cin >> v[i];
    sort(v.begin(), v.end());
    for(ll i=0; i<n; i++)   {
        x += v[i];
        pref[i] = x;
    }

    ll s = 0, e = 1000000000000, ans = 0;
    while(s <= e)   {
        ll mid = s + (e - s) / 2;
        if(isPossible(v, pref, mid, w))   ans = mid, s = mid + 1;
        else    e = mid - 1;
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