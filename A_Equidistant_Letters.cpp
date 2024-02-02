#include <bits/stdc++.h>
using namespace std;

void Sandipan() {
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    cout << s << endl;
}

int main()  {
    int t;
    cin >> t;
    while(t--)
        Sandipan();
    return 0;
}