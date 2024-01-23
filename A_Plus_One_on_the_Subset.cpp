#include<bits/stdc++.h>
using namespace std;

void sandipan() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    cout << *max_element(v.begin(), v.end()) - *min_element(v.begin(), v.end()) << endl;
}

int main()  {
    int t;
    cin >> t;
    while(t--)  sandipan();
    return 0;
}