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



// a=1  greater than
// a=2 less than
// a=3 not equal

void Sandipan()    {
    
    int n, mini = INT_MIN, maxi = INT_MAX;
    cin >> n;
    set<int> st;

    f(i, 0, n)  {
        int a, x;
        cin >> a >> x;
        if(a == 1)  
            mini = max(mini, x);
        else if(a == 2)
            maxi = min(maxi, x);
        else
            st.insert(x);
    }

    if(mini > maxi) {
        cout << "0" << endl;
        return;
    }

    int total = maxi - mini + 1;
    // find the count element present in the set and in the range mini to maxi
    auto lb = st.lower_bound(mini);
    if(lb == st.end() || *lb > maxi)    {
        cout << total << endl;
        return;
    }
    auto ub = st.lower_bound(maxi);
    int x = distance(lb, ub);
    if(ub != st.end() && *ub == maxi)
        x++;

    cout << total - x << endl;
    
}



int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}