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
#define pci pair<char, int>
#define f(i, s, e)  for(int i=s; i<e; i++)
#define fr(i, e, s)  for(int i=e; i>=s; i--)
#define yy cout << "YES\n"
#define nn cout << "NO\n"
ll mod = 1e9+7;

ll mul(ll a, ll b)  {return ((a%mod) *1ll* (b%mod)) %mod;}
int gcd(int a, int b)   {return __gcd(a, b); }
ll lcm(ll a, ll b)  {ll g = gcd(a%mod, b%mod); return (a*1ll*b)/g;}





void Sandipan()    {
    
    int n, mini = 5;
    cin >> n;
    string str;
    cin >> str;

    if(n==1)    {
        cout << "8" << endl;
        return;
    }
    if(n==2)    {
        string ans="";
        for(int i=16; i<100; i+=8)  {
            string temp = to_string(i);
            int cnt = 0;
            for(int j=0; j<2; j++)
                if(temp[j] != str[j])   cnt++;
            if(cnt <= mini) mini = cnt, ans = temp;
        }
        cout << ans << endl;
        return;
    }

    string ans;
    string s = "";
    for(int i=str.length()-3; i<str.length(); i++)  s.push_back(str[i]);
    // cout << "s : " << s << endl;

    for(int i=104; i<1000; i+=8)   {
        string temp = to_string(i);

        int cnt = 0;
        for(int j=0; j<3; j++)
            if(s[j] != temp[j]) cnt++;
        if(cnt <= mini)  mini = cnt, ans = temp;
    }
    int j = 0;
    for(int i=str.length()-3; i<str.length(); i++)
        str[i] = ans[j++];
    // cout << "ans : " << ans << endl;
    cout << str << endl;
}



int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}