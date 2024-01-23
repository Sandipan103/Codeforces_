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
#define pci pair<char, int>
#define f(i, s, e)  for(int i=s; i<e; i++)
#define fr(i, e, s)  for(int i=e; i>=s; i--)
#define yy cout << "YES\n"
#define nn cout << "NO\n"
ll mod = 1e9+7;

ll mul(ll a, ll b)  {return ((a%mod) *1ll* (b%mod)) %mod;}
int gcd(int a, int b)   {return __gcd(a, b); }
ll lcm(ll a, ll b)  {ll g = gcd(a%mod, b%mod); return (a*1ll*b)/g;}


void print(vl &v)   {
    for(auto it : v)    cout << it << " ";
    cout << endl << "--------------------" << endl;
}



void Sandipan()    {
    
    ll n;
    cin >> n;
    vl v(n), left(n, 1), right(n, 1);
    f(i, 0, n)  cin >> v[i];

    // cout << "printing v : " << endl;
    // print(v);

    // pre calculate the left array
    left[0] = 0;
    f(i, 2, n)  {
        ll d1 = v[i] - v[i-1], d2 = v[i-1] - v[i-2];
        if(d1 > d2) left[i] = d1;
    }
    f(i, 1, n)  left[i] += left[i-1];

    // pre calculate the right array
    right[n-1] = 0;
    fr(i, n-3, 0)   {
        int d1 = v[i+1] - v[i], d2 = v[i+2] - v[i+1];
        if(d1 > d2) right[i] = d1;
    }
    fr(i, n-2, 0)
        right[i] += right[i+1];

    // cout << "printing left : " << endl;
    // print(left);
    // cout << "printing right : " << endl;
    // print(right);

    ll query;
    cin >> query;
    f(z, 0, query)  {
        ll x, y;
        cin >> x >> y;
        x--;    y--;
        if(x < y)   
            cout << left[y] - left[x] << endl;
        else    
            cout << right[y] - right[x] << endl;
    }
    
}



int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}