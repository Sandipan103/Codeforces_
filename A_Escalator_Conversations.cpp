#include <bits/stdc++.h>
using namespace std;

void sandipan() {
    int n, m, k, h, x;
    cin >> n >> m >> k >> h;
    unordered_map<int, int> mp;

    for(int i=0; i<n; i++)  {
        cin >> x;
        mp[x]++;
    }

    int cnt = 0;
    for(int i=1; i<m; i++)  {
        cnt += mp[h+(i*k)];
        cnt += mp[h-(i*k)];
    }

    cout << cnt << endl;
}

int main()  {
    int test;
    cin >> test;
    while(test--)
        sandipan();
    return 0;
}