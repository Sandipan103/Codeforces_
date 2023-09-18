#include<bits/stdc++.h>
using namespace std;

void sandipan() {
    string s, str;
    cin >> s >> str;
    for(int i=0; i<s.length()-1; i++) {
        if(s[i]=='0' && s[i+1]=='1' && str[i]=='0' && str[i+1]=='1')    {
            cout <<"YES\n";
            return;
        }
    }
    cout <<"NO\n";
}

int main()  {
    int test;
    cin >> test;
    while(test--)   
    sandipan();
    return 0;
}