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





void Sandipan()    {
    
    int n, x;
    cin >> n;
    vector<pii> a(n), b(n), c(n);

    f(i, 0, n)  {
        cin >> x;
        a[i] = {x, i};
    }
    f(i, 0, n)  {
        cin >> x;
        b[i] = {x, i};
    }
    f(i, 0, n)  {
        cin >> x;
        c[i] = {x, i};
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    pii ma1 = a[n-1], ma2 = a[n-2], ma3 = a[n-3];
    pii mb1 = b[n-1], mb2 = b[n-2], mb3 = b[n-3];
    pii mc1 = c[n-1], mc2 = c[n-2], mc3 = c[n-3];

    ll maxi = 0, temp = 0;
    set<int> st;

    // 1 2 3
    maxi += ma1.first;
    st.insert(ma1.second);

    if(st.find(mb1.second) == st.end())  {
        maxi += mb1.first;
        st.insert(mb1.second);
    }
    else    {
        maxi += mb2.first;
        st.insert(mb2.second);
    }

    if(st.find(mc1.second) == st.end())  {
        maxi += mc1.first;
        st.insert(mc1.second);
    }
    else if(st.find(mc2.second) == st.end()) {
        maxi += mc2.first;
        st.insert(mc2.second);
    }
    else    {
        maxi += mc3.first;
        st.insert(mc3.second);
    }

    st.clear();

    // 1 3 2
    temp = ma1.first;
    st.insert(ma1.second);

    if(st.find(mc1.second) == st.end())  {
        temp += mc1.first;
        st.insert(mc1.second);
    }
    else    {
        temp += mc2.first;
        st.insert(mc2.second);
    }

    if(st.find(mb1.second) == st.end())  {
        temp += mb1.first;
        st.insert(mb1.second);
    }
    else if(st.find(mb2.second) == st.end()) {
        temp += mb2.first;
        st.insert(mb2.second);
    }
    else    {
        temp += mb3.first;
        st.insert(mb3.second);
    }

    st.clear();
    maxi = max(maxi, temp);

    // 2 1 3
    temp = mb1.first;
    st.insert(mb1.second);

    if(st.find(ma1.second) == st.end())  {
        temp += ma1.first;
        st.insert(ma1.second);
    }
    else    {
        temp += ma2.first;
        st.insert(ma2.second);
    }

    if(st.find(mc1.second) == st.end())  {
        temp += mc1.first;
        st.insert(mc1.second);
    }
    else if(st.find(mc2.second) == st.end()) {
        temp += mc2.first;
        st.insert(mc2.second);
    }
    else    {
        temp += mc3.first;
        st.insert(mc3.second);
    }

    st.clear();
    maxi = max(maxi, temp);

    // 2 3 1
    temp = mb1.first;
    st.insert(mb1.second);

    if(st.find(mc1.second) == st.end())  {
        temp += mc1.first;
        st.insert(mc1.second);
    }
    else    {
        temp += mc2.first;
        st.insert(mc2.second);
    }

    if(st.find(ma1.second) == st.end())  {
        temp += ma1.first;
        st.insert(ma1.second);
    }
    else if(st.find(ma2.second) == st.end()) {
        temp += ma2.first;
        st.insert(ma2.second);
    }
    else    {
        temp += ma3.first;
        st.insert(ma3.second);
    }

    st.clear();
    maxi = max(maxi, temp);

    // 3 1 2
    temp = mc1.first;
    st.insert(mc1.second);

    if(st.find(ma1.second) == st.end())  {
        temp += ma1.first;
        st.insert(ma1.second);
    }
    else    {
        temp += ma2.first;
        st.insert(ma2.second);
    }

    if(st.find(mb1.second) == st.end())  {
        temp += mb1.first;
        st.insert(mb1.second);
    }
    else if(st.find(mb2.second) == st.end()) {
        temp += mb2.first;
        st.insert(mb2.second);
    }
    else    {
        temp += mb3.first;
        st.insert(mb3.second);
    }

    st.clear();
    maxi = max(maxi, temp);

    // 3 2 1
    temp = mc1.first;
    st.insert(mc1.second);

    if(st.find(mb1.second) == st.end())  {
        temp += mb1.first;
        st.insert(mb1.second);
    }
    else    {
        temp += mb2.first;
        st.insert(mb2.second);
    }

    if(st.find(ma1.second) == st.end())  {
        temp += ma1.first;
        st.insert(ma1.second);
    }
    else if(st.find(ma2.second) == st.end()) {
        temp += ma2.first;
        st.insert(ma2.second);
    }
    else    {
        temp += ma3.first;
        st.insert(ma3.second);
    }

    st.clear();
    maxi = max(maxi, temp);

    cout << maxi << endl;

}



int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}


/*

17 5 4  18 12 4  11 2 16 16
8  4 14 19 3  12 6  7 5  16
3  4 8  11 10 8  10 2 20 3

*/