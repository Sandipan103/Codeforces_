#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define vl vector<ll>
#define vvl vector<vl>
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define f(i, s, e)  for(ll i=s; i<e; i++)
#define fr(i, e, s)  for(ll i=e; i>=s; i--)

template<typename T>
void print(vector<T> &v)   {
    for(auto it : v)
        cout << it << " ";
    cout << endl << "------------" << endl;
}




void Sandipan()    {
    
    ll n, q, l, u;
    cin >> n;
    vl v(n), pref(n+1, 0);
    f(i, 0, n)  cin >> v[i];
    pref[1] = v[0];
    f(i, 1, n)  pref[i+1] = pref[i] + v[i];

    cin >> q;
    vl ans(q);

    // cout << "printing pref : " << endl;
    // print(pref);


    f(i, 0, q)  {
        cin >> l >> u;
        ll req = pref[l-1] + u;
        ll lb = lower_bound(all(pref), req) - pref.begin();
        // cout << "req , lb : " << req << " " << lb << endl;
        if(lb > n)  lb--;
        ll neg = pref[lb] - req - 1;
        ll pos = v[lb-1] - neg - 1;
        if(neg >= pos)   lb--;
        ans[i] = max(lb, l);
    }

    for(auto it : ans)
        cout << it << " ";
    cout << endl;
    
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