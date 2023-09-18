#include<bits/stdc++.h>
using namespace std;

void sandipan() {
    int n;
    cin >> n;
    vector<int> v(n), pref(n), suff(n);
    for(int i=0; i<n; i++)  cin >> v[i];
    int x = 0;
    for(int i=0; i<n; i++)  {
        x ^= v[i];
        pref[i] = x;
    }
    x = 0;
    for(int i=n-1; i>=0; i--)   {
        x ^= v[i];
        suff[i] = x;
    }
    for(int i=0; i<n; i++)  cout << pref[i] << " ";
    cout << endl;
    for(int i=0; i<n; i++)  cout << suff[i] << " ";
    cout << endl;
    
}

int main()  {
    int test;
    cin >> test;
    while(test--)   sandipan();
    return 0;
}