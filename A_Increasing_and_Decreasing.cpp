#include <bits/stdc++.h>
using namespace std;

void sandipan() {
    int l, r, n;
    cin >> l >> r >> n;
    int gap = (n*(n-1)) / 2;
    if(r < l+gap)   {
        cout << "-1\n";
        return;
    }
    vector<int> v;
    v.push_back(r);
    for(int i=1; i<n-1; i++)
        v.push_back(v.back() - i);
    v.push_back(l);
    reverse(v.begin(), v.end());
    for(auto it : v)    cout << it << " ";
    cout << endl;
}

int main()  {
    int test;
    cin >> test;

    while(test--)   
        sandipan();
    return 0;
}