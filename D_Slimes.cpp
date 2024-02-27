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
    
    ll n;
    cin >> n;
    vl v(n);
    f(i, 0, n)  cin >> v[i];
    // priority_queue<pair<ll, pll>, vector<pair<ll, pll>>, greater<pair<ll, pll>>> pq;
    // vl dist(n, 1e9);
    // f(i, 0, n)  pq.push({0, {i, v[i]}});

    // while(!pq.empty())  {
    //     auto fr = pq.top();
    //     ll cnt = fr.first, index = fr.second.first, val = fr.second.second;
    //     pq.pop();

    //     if(index > 0 && v[index-1] < val)   {
    //         dist[index-1] = min(dist[index-1], cnt+1);
    //         pq.push({cnt+1, {index-1, val+v[index-1]}});
    //     }
    // }

    // f(i, 0, n)  pq.push({0, {i, v[i]}});
    // while(!pq.empty())  {
    //     auto fr = pq.top();
    //     ll cnt = fr.first, index = fr.second.first, val = fr.second.second;
    //     pq.pop();
    //     if(index+1 < n && v[index+1] < val)   {
    //         dist[index+1] = min(dist[index+1], cnt+1);
    //         pq.push({cnt+1, {index+1, val+v[index+1]}});
    //     }
    // }


    vl pref(n, 0), dist(n, 1e9);
    pref[0] = v[0];
    f(i, 1, n)  {
        if(pref[i-1] != v[i])
            pref[i] = pref[i-1] + v[i];
        else    pref[i] = v[i];
    }
    // f(i, 1, n)  {
    //     if(pref[i-1] == v[i] && v[i-1] == v[i]) pref[i] = v[i];
    //     else    pref[i] = pref[i-1] + v[i];
    // }

    f(i, 0, n)  {
        ll req = v[i]+1+pref[i];
        ll index = lower_bound(pref.begin(), pref.end(), req) - pref.begin();
        if(index >= n)  continue;
        dist[i] = index - i;
    }

    reverse(all(v));
    reverse(all(dist));
    pref[0] = v[0];
    f(i, 1, n)  {
        if(pref[i-1] != v[i])
            pref[i] = pref[i-1] + v[i];
        else    pref[i] = v[i];
    }
    // f(i, 1, n)  {
    //     if(pref[i-1] == v[i] && v[i-1] == v[i]) pref[i] = v[i];
    //     else    pref[i] = pref[i-1] + v[i];
    // }

    f(i, 0, n)  {
        ll req = v[i]+1+pref[i];
        ll index = lower_bound(pref.begin(), pref.end(), req) - pref.begin();
        if(index >= n)  continue;
        dist[i] = min(index - i, dist[i]);
    }
    reverse(all(dist));

    for(auto &it : dist)
        if(it >= 1e9)   it = -1;
    for(auto it : dist)
        cout << it << " ";
    cout << endl;
    
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