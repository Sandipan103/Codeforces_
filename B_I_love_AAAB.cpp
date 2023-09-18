#include <bits/stdc++.h>
using namespace std;

void Sandipan() {
    string s;
    cin >> s;
    bool flag = true;
    if(s[0] != 'A' || s.back() != 'B')  flag = false;

    int count_a=1, count_b=0;

    for(int i=1; i<s.length(); i++) {
        if(s[i] == 'A') {
            if(s[i-1] == 'B')   count_a = 1;
            else    count_a++;
            count_b = 0;
        }
        else    {
            count_b++;
            if(count_b > count_a)   flag = false;
        }
    }
    
    if(flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()  {
    int test;
    cin >> test;

    while(test--)   Sandipan();
    return 0;
}