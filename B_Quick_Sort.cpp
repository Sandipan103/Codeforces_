#include<bits/stdc++.h>
using namespace std;

void sandipan() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0; i<n; i++) 
        cin >> v[i];
    int cnt = 0, element = 1, i=0;
    while (i<n) {
        if(element==v[i])   element++;
        else    cnt++;
        i++;
    }
    int ans = cnt/k;
    if(cnt%k)   ans++;
    cout << ans << endl;
    
}

int main()  {
    int test;
    cin >> test;
    while(test--)   {
        sandipan();
    }
    return 0;
}