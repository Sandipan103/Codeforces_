#include<bits/stdc++.h>
using namespace std;

void sandipan() {
    string str;
    cin >> str;
    int len = 0, prev = -1;

    for(int i=0; i<str.length(); i++)   {

        if(str[i] == '+') len++;
        if(str[i] == '-')  len--;

        if(len <= 1)    prev = -1;

        if(str[i] == '0') {
            if(len <= 1 || prev == 1)   {
                cout << "NO" << endl;
                return;
            }
            prev = 0;
        }

        else if(str[i] == '1')   {
            if(prev == 0)   {
                cout << "NO" << endl;
                return;
            }
            prev = 1;
        }
        
    }

    cout << "YES" << endl;
}

int main()  {
    int test;
    cin >> test;
    while(test--)   
    sandipan();
    return 0;
}

// + + + + 0 + + - - - 1
// 1 2 3 4 T 5 6 5 4 3 