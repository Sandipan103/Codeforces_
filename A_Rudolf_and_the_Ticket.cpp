#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define vl vector<ll>
#define all(v) v.begin(), v.end()
#define f(i, s, e)  for(ll i=s; i<e; i++)


void Sandipan()    {
    
    ll n, m, k, ans = 0;
    cin >> n >> m >> k;
    vl a(n), b(m);
    f(i, 0, n)  cin >> a[i];
    f(i, 0, m)  cin >> b[i];
    sort(all(a));
    sort(all(b));

    for(auto it : a)    {
        if(b[0] > k - it)  break;
        ans += lower_bound(b.begin(), b.end(), k - it + 1) - b.begin();
    }

    cout << ans << endl;

}



int main()  {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}