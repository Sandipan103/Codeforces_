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
    
    ll n, k;
    cin >> n >> k;
    vl v(n);
    f(i, 0, n)  cin >> v[i];
    ll i = 0, j = n-1, curr = 0, ans = 0;

    while(k > 0 && i <= j)  {
        if(i == j)  {
            if(v[i] > k)    
                cout << n-1 << endl;
            else    
                cout << n << endl;
            return;
        }
        ll mini = min(v[i], v[j])-1;
        // cout << "curr : " << curr << endl;
        if(2*1ll*mini > k)    {
            // cout << "1\n";
            cout << ans << endl;
            return;
        }
        if(curr == i && v[i] == 1)  {
            // cout << "2\n";
            v[i] = 0, i++, k--, ans++;
            curr = j;
        }
        else if(curr == j && v[j] == 1) {
            // cout << "3\n";
            v[j] = 0, j--, k--, ans++;
            curr = i;
        }
        else if(curr == i && v[j] == 1) {
            // cout << "4\n";
            curr = j, v[i]--, k--;
        }
        else if(curr == j && v[i] == 1) {
            // cout << "5\n";
            curr = i, v[j]--, k--;
        }
        else    {
            // cout << "6\n";
            v[i] -= mini, v[j] -= mini, k -= 2*1ll*mini;
        }
        
        // cout << " : " << i << " " << j << " " << k  << " " << ans << endl;
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