#include<bits/stdc++.h>
using namespace std;

void solve()    {
    int n, k, cnt = 1;
    cin >> n;
    vector<int> v(n), vis(n, 0);
    for(int i=0; i<n; i++)
        cin >> v[i];
    cin >> k;
    k--;

    while(true) {
        int maxi = 0, pos = -1;

        for(int i=0; i<n; i++)
            if(!vis[i] && maxi < v[i])
                maxi = v[i], pos = i;
        
        if(pos == k || pos == -1)  break;
        cnt++;
        vis[pos] = 1;
        for(int i=0; i<pos; i++)
            v[i]++;
    }

    cout << cnt << endl;
}

int main()  {
    solve();
}