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
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define pii pair<int, int>
#define F first
#define S second
#define pll pair<ll, ll>
#define pci pair<char, int>
#define f(i, s, e)  for(ll i=s; i<e; i++)
#define fr(i, e, s)  for(ll i=e; i>=s; i--)
#define yy cout << "YES\n"
#define nn cout << "NO\n"
ll mod = 1e9+7;

ll mul(ll a, ll b)  {return ((a%mod) *1ll* (b%mod)) %mod;}
ll gcd(ll a, ll b)   {return __gcd(a, b); }
ll lcm(ll a, ll b)  {ll g = gcd(a%mod, b%mod); return (a*1ll*b)/g;}

template<typename T>
void print(vector<T> &v)   {
    for(auto it : v)
        cout << it << " ";
    cout << endl << "------------" << endl;
}

template<typename T>
void print2d(vector<T> &v)   {
    for(auto it : v)    {
        for(auto x : it)
            cout << x << " ";
        cout << endl;
    }
    cout << endl << "------------" << endl;
}





void Sandipan()    {
    
    ll n, q;
    cin >> n >> q;
    string a, b;
    cin >> a >> b;
    vvi va(n, vi(26, 0)), vb(n, vi(26, 0));

    va[0][a[0] - 'a']++;
    vb[0][b[0] - 'a']++;

    for(int i=1; i<n; i++)  {
        va[i] = va[i-1];
        va[i][a[i] - 'a']++;
        vb[i] = vb[i-1];
        vb[i][b[i] - 'a']++;
    }

    for(int i=0; i<q; i++)  {
        ll l, r, cnt = 0;
        cin >> l >> r;
        l--, r--;
        vi temp(26, 0);
        for(int j=0; j<26; j++)
            temp[j] += va[r][j] - vb[r][j];
        if(l > 0)  {
            for(int j=0; j<26; j++)
                temp[j] -= va[l-1][j] - vb[l-1][j];
        }
        for(auto it : temp) cnt += abs(it);
        cout << cnt/2 << endl;
    }
    
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