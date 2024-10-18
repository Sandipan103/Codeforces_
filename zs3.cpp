#include <bits/stdc++.h>
using namespace std;

int main()  {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)  cin >> v[i];
    int maxi = *max_element(v.begin(), v.end());
    int sum = 0;
    for(auto it : v)
        if(it == maxi)  sum += maxi;
    cout << sum << endl;
}