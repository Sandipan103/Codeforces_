#include <bits/stdc++.h>
using namespace std;

void sandipan() {
    int n , a, q;
    cin >> n >> a >> q;
    int total = a, curr = a;
    bool flag = (curr >= n);
    for(int i=0; i<q; i++)  {
        char ch;
        cin >> ch;
        if(ch == '+')   total++, curr++;
        else    curr--;
        if(curr >= n)   flag = true;
    }
    if(flag)   
        cout << "YES\n";
    else if(total >= n)
        cout << "MAYBE\n";
    else
        cout << "NO\n";
    return;
}

int main()  {
    int test;
    cin >> test;
    while(test--)
        sandipan();
    return 0;
}