#include <bits/stdc++.h>
using namespace std;

void sandipan() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if(k%2==0)  {
        sort(s.begin(), s.end());
        cout << s << endl;
        return;
    }
    string even="", odd="";
    for(int i=0; i<n; i++)  {
        if(i&1) odd.push_back(s[i]);
        else    even.push_back(s[i]);
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    int oddIndex=0, evenIndex=0;

    for(int i=0; i<n; i++)  
        s[i] = (i&1) ? odd[oddIndex++] : even[evenIndex++];
    
    cout << s << endl;
}

int main()  {
    int test;
    cin >> test;

    while(test--)
        sandipan();
    
    return 0;
}