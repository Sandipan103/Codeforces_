#include <bits/stdc++.h>
using namespace std;
#define ll long long

void sandipan() {
    ll n, m, x = 0, temp = 0, z;
    cin >> n >> m;

    for(ll i=0; i<n; i++)  cin >> z, x ^= z;
    for(ll i=0; i<m; i++)  cin >> z, temp |= z;

    if(n&1)   // odd
        cout << x << " " << (x|temp) << endl;
    else       // even
        cout << (x&(~temp)) << " " << x <<endl;
}

int main()  {
    ll test;
    cin >> test;
    while(test--)   sandipan();
    return 0;
}