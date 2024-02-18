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


string makeAddition(string &a, string &b)   {
    reverse(all(a));
    reverse(all(b));
    string ans = "";
    int i=0, j=0, c=0;
    while(i<a.size() && j<b.size()) {
        int x = (a[i]-'0') + (b[j]-'0') + c;
        ans.pb('0' + x % 10);
        c = x / 10;
        i++; j++;
    }
    while(i < a.size()) {
        int x = (a[i]-'0') + c;
        ans.pb('0' + x % 10);
        c = x / 10;
        i++;
    }
    while(j < b.size()) {
        int x = (b[j]-'0') + c;
        ans.pb('0' + x % 10);
        c = x / 10;
        j++;
    }
    while(c > 0)    {
        ans.pb('0' + c%10);
        c /= 10;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}


void Sandipan()    {
    
    int n;
    string s;
    cin >> n >> s;
    vl v(n, 0);
    ll x = 0;

    f(i, 0, n)  {
        x += s[i] - '0';
        v[i] = x;
    }

    // for(auto it : v)    cout << it << " ";
    // cout << endl;

    string ans = "", c = "0";  
    fr(i, n-1, 0)   {
        string x = to_string(v[i]);
        string temp = makeAddition(c, x);
        char ch = temp.back();
        ans.pb(ch);
        temp.pop_back();
        c = temp;
    }
    while(c.length() > 0)   {
        ans.pb(c.back());
        c.pop_back();
    }
    while(ans.size() > 1 && ans.back() == '0')  ans.pop_back();
    reverse(all(ans));
    cout << ans << endl;

    // string ans = "0";
    // f(i, 0, n)  {
    //     char ch = s[i];
    //     string temp;
    //     f(j, i, n)  temp.pb(ch);
    //     ans = makeAddition(temp, ans);
    // }

    // reverse(all(ans));
    // while(ans.size() > 1 && ans.back() == '0')  ans.pop_back();
    // reverse(all(ans));
    // cout << ans << endl;
    
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