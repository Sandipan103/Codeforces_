#include<bits/stdc++.h>
using namespace std;

int main()  {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)  cin >> v[i];
    sort(v.rbegin(), v.rend());
    int x, y, temp = 0, cnt = 0;
    cin >> x >> y;
    for(auto it : v)    {
        if(it <= temp)  break;
        int req = it - temp;
        int step = req / x;
        if(req % x) step++;
        temp += (step * y);
        cnt += step;
    }
    cout << cnt << endl;
}