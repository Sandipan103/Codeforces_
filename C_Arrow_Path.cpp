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



bool dfs(int r, int c, int n, vvc &v, vvi &vis) {
    if(r == 1 && c == n-1)  return true;
    int nr , nc;
    // go left
    if(c-1 >= 0 && !vis[r][c-1]) {
        if(v[r][c-1] == '<')    nc = c-2;
        else    nc = c;
        if(nc >= 0  && nc < n && !vis[r][nc])  {
            vis[r][nc] = 1;
            if(dfs(r, nc, n, v, vis))
                return true;
        }
    }
    // go right
    if(c+1 < n && !vis[r][c+1]) {
        if(v[r][c+1] == '<')    nc = c;
        else    nc = c + 2;
        if(nc >= 0 && nc < n && !vis[r][nc])  {
            vis[r][nc] = 1;
            if(dfs(r, nc, n, v, vis))
                return true;
        }
    }
    // go down
    if(r-1 >= 0 && !vis[r-1][c]) {
        if(v[r-1][c] == '<')    nc = c-1;
        else    nc = c+1;
        if(nc >= 0 && nc < n && !vis[r-1][nc])  {
            vis[r-1][nc] = 1;
            if(dfs(r-1, nc, n, v, vis))
                return true;
        }
    }
    // go up
    if(r+1 < 2 && !vis[r+1][c]) {
        if(v[r+1][c] == '<')    nc = c-1;
        else    nc = c+1;
        if(nc >= 0 && nc < n && !vis[r+1][nc])  {
            vis[r+1][nc] = 1;
            if(dfs(r+1, nc, n, v, vis))
                return true;
        }
    }

    return false;
}

void Sandipan()    {
    
    int n;
    cin >> n;
    vvc v(2, vc(n));
    f(i, 0, 2)  f(j, 0, n)  cin >> v[i][j];
    vvi vis(2, vi(n, 0));
    vis[0][0] = 1;
    if(dfs(0, 0, n, v, vis))    yy;
    else    nn;
    
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