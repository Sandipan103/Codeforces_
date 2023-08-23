#include<bits/stdc++.h>
using namespace std;
 
#define ll long long 
 
 
void sandipan() {
 
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(int i=0; i<n; i++)  cin >> v[i];
    ll cnt=0, ze = 0;
 
    vector<ll> power(60);
    power[0] = 1;
    for(int i=1; i<60; i++)
        power[i] = 2*1ll*power[i-1];
 
    // for(auto it : power)    cout << it << " " ;
    
    for(int i=0; i<n; i++)  {
        if(v[i] == 1)   cnt++;
        else if(v[i] == 0)   ze++;
    }
 
    cnt = cnt * 1ll * power[ze];
    cout << cnt << endl;
}
 
int main()  {
    int test;
    cin >> test;
    while(test--)   {
        sandipan();
    }
    return 0;
}