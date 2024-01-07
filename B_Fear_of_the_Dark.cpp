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


double dis(double a, double b, double x, double y)  {
    return sqrt(pow(a-x, 2) + pow(b-y, 2));
}

bool isPossible(double px, double py, double ax, double ay, double bx, double by, double mid)   {
    double dap = dis(px, py, ax, ay), da0 = dis(0, 0, ax, ay);
    double dbp = dis(px, py, bx, by), db0 = dis(0, 0, bx, by);
    if(dap<=mid && da0<=mid)    return true;
    if(dbp<=mid && db0<=mid)    return true;
    if(dis(ax, ay, bx, by)/2 > mid)    return false;
    if((dap<=mid && db0<=mid) || (da0<=mid && dbp<=mid))    return true;
    return false;
}

void Sandipan()    {
    
    cout << fixed << setprecision(10);
    double px, py, ax, ay, bx, by, h = 1e-9;
    cin >> px >> py >> ax >> ay >> bx >> by;
    double s = 0, e = max(dis(px, py, ax, ay), (0, 0, ax, ay)), ans = e;
    while(s <= e)   {
        double mid = s + (e - s) / 2;
        if(isPossible(px, py, ax, ay, bx, by, mid))    ans = mid, e = mid - h;
        else    s = mid + h;
    }
    cout << ans << endl;
}



int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}