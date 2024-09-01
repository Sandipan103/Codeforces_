#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> v, int n, int mid)  {
    int rem = 0;
    for(int i=0; i<n; i++)  
        if(v[i] - mid > 0)
            rem += 2 * (v[i] - mid);

    for(int i=0; i<n; i++)  
        if(mid > v[i])
            rem -= (mid - v[i]) / 2;
    
    return rem <= 0;
}

int solve(int n, int m, vector<int> &cache) {
    vector<int> v(n, 0);
    for(auto it : cache)
        v[it - 1]++;

    int s = 0, e = 2 * m, ans = e;
    while(s <= e)   {
        int mid = s + (e - s) / 2;
        if(isPossible(v, n, mid))
            ans = mid, e = mid - 1;
        else    
            s = mid + 1;
    }
    return ans;
}

int main()  {
    int n, m;
    cin >> n >> m;
    vector<int> cache(m);
    for(int i=0; i<m; i++)
        cin >> cache[i];
    int ans = solve(n, m, cache);
    cout << "ans : " << ans << endl;
}