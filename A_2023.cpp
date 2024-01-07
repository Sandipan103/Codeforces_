#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>


void solve()    {
    int n, k, temp;
    long long s = 1;
    cin >> n >> k;
    for(int i=0; i<n; i++)  {
        cin >> temp;
        s *= temp;
    }
    if(2023%s)
        cout << "NO" << endl;
    else    {
        cout << "YES" << endl;
        cout << 2023/s << " ";
        for(int i=0; i<k-1; i++)
            cout << "1 ";
        cout << endl;
    }
}

int main()  {
    int n;
    cin >> n;
        while(n--)  solve();
    return 0;
}