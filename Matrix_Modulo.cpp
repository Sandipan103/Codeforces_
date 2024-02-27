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



ll fact(ll n)   {
    return n<=1 ? 1 : n * fact(n-1);
}

void Sandipan()    {
    
    ll n;
    cin >> n;
    vvl v(n, vl(n, 0));
    f(i, 0, n)  f(j, 0, n)  cin >> v[i][j];
    ll m = (n*(n-1)) / 2;
    ll pairCnt = 0, cnt = 0;
    map<ll, ll> mp, eleCnt;
    f(i, 1, m+1)    {
        ll temp = n*n - m + i;
        mp[i] = temp;
        mp[temp] = i;
    }

    f(i, 0, n)  {
        if(mp.find(v[i][i]) != mp.end())    {
            cout << "0" << endl;
            return;
        }
        else if(v[i][i])    cnt++;
    }

    f(i, 0, n)  {
        f(j, 0, n)  {
            if(i==j)    continue;;
            if(v[i][j] == 0)    continue;
            if(mp.find(v[i][j]) == mp.end())    {
                cout << "0" << endl;
                return;
            }
            else if(v[j][i] == 0)    {
                v[j][i] = mp[v[i][j]];
                eleCnt[v[i][j]]++;
                eleCnt[v[j][i]]++;
                if(eleCnt[v[i][j]] > 1 || eleCnt[v[j][i]] > 1)  {
                    cout << "0" << endl;
                    return;
                }
                pairCnt++;
            }
            else    {
                if(v[j][i] != mp[v[i][j]])  {
                    cout << "0" << endl;
                    return;
                }
                eleCnt[v[i][j]]++;
                eleCnt[v[j][i]]++;
                if(eleCnt[v[i][j]] > 1 || eleCnt[v[j][i]] > 1)  {
                    cout << "0" << endl;
                    return;
                }
                pairCnt++;
            }
        }
    }
        

    // f(i, 0, n)  {
    //     f(j, 0, n)  {
    //         if(v[i][j]) {
    //             if(mp.find(v[i][j]) != mp.end())    {
    //                 if(mp[v[i][j]] != v[j][i])  {
    //                     cout << "0" << endl;
    //                     return;
    //                 }
    //                 else    pairCnt++;
    //             }
    //             else    cnt++;
    //         }
    //     }
    // }

    ll remElement = n - cnt;
    pairCnt /= 2;
    ll remPair = m - pairCnt;

    cout << "pair, remPair, cnt , remCnt : " << pairCnt << " " << remPair << " " << cnt << " " << remElement << endl;
    cout << fact(remPair) * pow(2, remPair) * fact(remElement) << endl;
    
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