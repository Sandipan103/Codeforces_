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
    
    int n;
    string s;
    cin >> n >> s;
    if(n%2 == 0)    {
        vi even(26, 0), odd(26, 0);
        f(i, 0, n)  {
            if(i&1) odd[s[i] - 'a']++;
            else    even[s[i] - 'a']++;
        }
        cout << n - *max_element(even.begin(), even.end()) - *max_element(odd.begin(), odd.end()) << endl;
        return;
    }

    vvi prev(n+8, vi(26, 0)), next(n+8, vi(26, 0));
    f(i, 0, n)  {
        prev[i+2] = prev[i];
        prev[i+2][s[i] - 'a']++;
    }
    for(int i=n-1; i>=0; i--)   {
        next[i+2] = next[i+4];
        next[i+2][s[i] - 'a']++;
    }
    int mini = n;
    f(i, 0, n)  {
        // now delete the i'th element
        vi even(26, 0), odd(26, 0);
        f(j, 0, 26)
            even[j] = prev[i][j] + next[i+3][j], odd[j] = prev[i+1][j] + next[i+4][j];
        mini = min(mini, n - *max_element(even.begin(), even.end()) - *max_element(odd.begin(), odd.end()));
    }
    cout << mini << endl;
    return;
    
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