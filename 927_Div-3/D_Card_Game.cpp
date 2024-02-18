#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define pb push_back
#define pob pop_back
#define vi vector<int>
#define vvi vector<vi>
// #define vc vector<char>
// #define vvc vector<vc>
#define vl vector<ll>
#define vvl vector<vl>
// #define vs vector<string>
// #define vvs vector<vs>
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





void Sandipan()    {
    
    ll n;
    cin >> n;
    char don;
    cin >> don;
    vector<string> v(2*n);
    f(i, 0, 2*n)  cin >> v[i];
    vector<string> vc, vd, vh, vs, ans;
    for(auto it : v)    {
        if(it[1] == 'C')    vc.pb(it);
        if(it[1] == 'D')    vd.pb(it);
        if(it[1] == 'H')    vh.pb(it);
        if(it[1] == 'S')    vs.pb(it);
    }
    sort(all(vc));
    sort(all(vd));
    sort(all(vh));
    sort(all(vs));
    string temp = "";
    if(don == 'C')  {
        int x = vd.size()%2, y = vh.size()%2, z=vs.size()%2;
        if(x+y+z > vc.size())   {
            cout << "IMPOSSIBLE" << endl;
            return;
        }

        int j = 0, i = 0;
        while(i+1<vd.size())    {
            temp = vd[i] + " " + vd[i+1];
            ans.pb(temp);
            i+=2;
        }
        if(i<vd.size()) {
            temp = vd[i] + " " + vc[j++];
            ans.pb(temp);
        }

        i = 0;
        while(i+1<vh.size())    {
            temp = vh[i] + " " + vh[i+1];
            ans.pb(temp);
            i+=2;
        }
        if(i<vh.size()) {
            temp = vh[i] + " " + vc[j++];
            ans.pb(temp);
        }
        i = 0;

        while(i+1<vs.size())    {
            temp = vs[i] + " " + vs[i+1];
            ans.pb(temp);
            i+=2;
        }
        if(i<vs.size())
            temp = vs[i] + " " + vc[j++], ans.pb(temp);
        i = 0;

        while(j+1<vc.size())    {
            temp = vc[j] + " "  + vc[j+1];
            ans.pb(temp);
            j += 2;
        }
    }
    if(don == 'D')  {
        int x = vc.size()%2, y = vh.size()%2, z=vs.size()%2;
        if(x+y+z > vd.size())   {
            cout << "IMPOSSIBLE" << endl;
            return;
        }

        int j = 0, i = 0;
        while(i+1<vc.size())    {
            temp = vc[i] + " " + vc[i+1];
            ans.pb(temp);
            i+=2;
        }
        if(i<vc.size())
            temp = vc[i] + " " + vd[j++], ans.pb(temp);

        i = 0;
        while(i+1<vh.size())    {
            temp = vh[i] + " " + vh[i+1];
            ans.pb(temp);
            i+=2;
        }
        if(i<vh.size())
            temp = vh[i] + " " + vd[j++], ans.pb(temp);

        i = 0;
        while(i+1<vs.size())    {
            temp = vs[i] + " " + vs[i+1];
            ans.pb(temp);
            i+=2;
        }
        if(i<vs.size())
            temp = vs[i] + " " + vd[j++], ans.pb(temp);

        while(j+1<vd.size())    {
            temp = vd[j] + " "  + vd[j+1];
            ans.pb(temp);
            j += 2;
        }
    }
    if(don == 'H')  {
        int x = vd.size()%2, y = vc.size()%2, z=vs.size()%2;
        if(x+y+z > vh.size())   {
            cout << "IMPOSSIBLE" << endl;
            return;
        }

        int j = 0, i = 0;
        while(i+1<vc.size())    {
            temp = vc[i] + " " + vc[i+1];
            ans.pb(temp);
            i+=2;
        }
        if(i<vc.size())
            temp = vc[i] + " " + vh[j++], ans.pb(temp);

        i = 0;
        while(i+1<vd.size())    {
            temp = vd[i] + " " + vd[i+1];
            ans.pb(temp);
            i+=2;
        }
        if(i<vd.size())
            temp = vd[i] + " " + vh[j++], ans.pb(temp);
        i = 0;

        while(i+1<vs.size())    {
            temp = vs[i] + " " + vs[i+1];
            ans.pb(temp);
            i+=2;
        }
        if(i<vs.size())
            temp = vs[i] + " " + vh[j++], ans.pb(temp);
        i = 0;

        while(j+1<vh.size())    {
            temp = vh[j] + " "  + vh[j+1];
            ans.pb(temp);
            j += 2;
        }
    }
    if(don == 'S')  {
        int x = vd.size()%2, y = vh.size()%2, z=vc.size()%2;
        if(x+y+z > vs.size())   {
            cout << "IMPOSSIBLE" << endl;
            return;
        }

        int j = 0, i = 0;
        while(i+1<vc.size())    {
            temp = vc[i] + " " + vc[i+1];
            ans.pb(temp);
            i+=2;
        }
        if(i<vc.size())
            temp = vc[i] + " " + vs[j++], ans.pb(temp);

        i = 0;
        while(i+1<vd.size())    {
            temp = vd[i] + " " + vd[i+1];
            ans.pb(temp);
            i+=2;
        }
        if(i<vd.size())
            temp = vd[i] + " " + vs[j++], ans.pb(temp);
        i = 0;

        while(i+1<vh.size())    {
            temp = vh[i] + " " + vh[i+1];
            ans.pb(temp);
            i+=2;
        }
        if(i<vh.size())
            temp = vh[i] + " " + vs[j++], ans.pb(temp);
        i = 0;

        while(j+1<vs.size())    {
            temp = vs[j] + " "  + vs[j+1];
            ans.pb(temp);
            j += 2;
        }
    }


    for(auto it : ans)
        cout << it << endl;
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
