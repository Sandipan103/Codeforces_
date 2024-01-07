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
#define pll pair<ll, ll>
#define plp pair<ll, pll>
#define pci pair<char, int>
#define f(i, s, e)  for(int i=s; i<e; i++)
#define fr(i, e, s)  for(int i=e; i>=s; i--)
#define yy cout << "YES\n"
#define nn cout << "NO\n"
ll mod = 1e9+7;

void Sandipan()    {
    
    ll n;
    cin >> n;
    vector<ll> row(n), col(n);
    for(ll i=0; i<n; i++)   cin >> row[i];
    for(ll i=0; i<n; i++)   cin >> col[i];
    sort(all(row));
    sort(all(col));
    ll sum1 = row[0]+col[0], sum2 = sum1;
    for(ll i=1; i<n; i++)
        sum1 += row[0]+0ll+col[i], sum2 += row[i]+0ll+col[0];
    cout << min(sum1, sum2) << endl;
    
}



int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}
