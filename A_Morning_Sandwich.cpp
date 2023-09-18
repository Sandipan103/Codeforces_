#include <bits/stdc++.h>
using namespace std;

void sandipan() {
    int b, c, h;
    cin >> b >> c >> h;
    int mini = min(b-1, c+h);
    cout << 2*mini + 1 << endl;
}

int main()  {
    int test;
    cin >> test;
    while(test--)   sandipan();
    return 0;
}