#include<bits/stdc++.h>
using namespace std;

void sandipan() {
    string s;
    cin >> s;
    for(int i=0; i<s.length(); i++) {
        if(s[i] == '1') {
            cout << "13\n";
            return;
        }
        if(s[i] == '3') {
            cout << "31\n";
            return;
        }
    }
}

int main()  {
    int test;
    cin >> test;
    while(test--)   
    sandipan();
    return 0;
}