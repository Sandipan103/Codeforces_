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
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pci pair<char, int>
#define f(i, s, e)  for(int i=s; i<e; i++)
#define fr(i, e, s)  for(int i=e; i>=s; i--)
#define yy cout << "YES\n"
#define nn cout << "NO\n"
ll mod = 1e9+7;

ll mul(ll a, ll b)  {return ((a%mod) *1ll* (b%mod)) %mod;}
int gcd(int a, int b)   {return __gcd(a, b); }
ll lcm(ll a, ll b)  {ll g = gcd(a%mod, b%mod); return (a*1ll*b)/g;}


bool allPresent(vi &v, int k)   {
    for(auto it : v)
        if(it == 0) return false;
    return true;
}

char findMinimum(vi &v, int k)  {
    int mini = INT_MAX, index = 0;
    for(int i=0; i<k; i++)  
        if(v[i] < mini) mini = v[i], index = i;
    return 'a' + index;
}



void Sandipan()    {
    
    int n, k, m;
    cin >> n >> k >> m;
    string s, ans = "";
    cin >> s;
    int len = 0;
    char ch;
    vi v(k, 0);
    for(auto it : s)    {
        v[it - 'a']++;
        if(allPresent(v, k))    {
            len++;
            ans.push_back(it);
            for(int i=0; i<k; i++)
                v[i] = 0;
        }
    }
    if(len >= n)    {
        cout << "YES" << endl;
        return;
    }
    ch = findMinimum(v, k);
    
    while(ans.length() < n)
        ans.push_back(ch);
    cout << "NO" << endl;
    cout << ans << endl;
}


int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}