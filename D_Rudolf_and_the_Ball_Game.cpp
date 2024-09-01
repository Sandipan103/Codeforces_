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
    
    ll n, m, x;
    cin >> n >> m >> x;
    vector<pair<int, char>> v(m);
    for(int i=0; i<m; i++)
        cin >> v[i].first >> v[i].second;
    set<int> st;
    st.insert(x);

    for(auto it : v)    {
        set<int> fr, bk;
        for(auto i : st)    {
            int next = i + it.first;
            if(next > n)    next -= n;
            fr.insert(next);
            int prev = i - it.first;
            if(prev <= 0)   prev += n;
            bk.insert(prev);
        }
        st.clear();
        if(it.second == '?')    {
            for(auto i : fr)
                st.insert(i);
            for(auto i : bk)
                st.insert(i);
        }
        else if(it.second == '0')   {
            for(auto i : fr)
                st.insert(i);
        }
        else    {
            for(auto i : bk)
                st.insert(i);
        }
    }

    cout << st.size() << endl;
    for(auto it : st)
        cout << it << " ";
    cout << endl;

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