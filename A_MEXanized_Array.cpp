#include <bits/stdc++.h>
using namespace std;

void sandipan() {
    int n, k, x;
    cin >> n >> k >> x;
    if(k > n || k > x+1){
        cout << "-1" << endl;
        return;
    }
    int sum = 0, cnt = 0;
    for(int i=0; i<k; i++)  sum += i, cnt++;
    while(cnt++<n)  {
        if(x != k)
        sum += x;
        else    sum += (x-1);
    }
    cout << sum << endl;
}

int main()  {
    int test;
    cin >> test;
    while(test--)   sandipan();
    return 0;
}