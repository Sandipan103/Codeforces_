#include <bits/stdc++.h>
using namespace std;

int findLucky(int n)    {
    int s=9, h=0;
    while(n)    {
        int dig = n%10;
        n /= 10;
        s = min(s, dig);
        h = max(h, dig);
    }
    return h - s;
}

void sandipan() {
    int l, r;
    cin >> l >> r;
    l = max(l, r-100);
    int ans = l, maxi=0;

    for(int i=l; i<=r; i++) {
        int luckey = findLucky(i);
        if(luckey > maxi)   {
            maxi = luckey;
            ans = i;
        }
    }

    cout << ans << endl;
}

int main()  {
    int test;
    cin >> test;
    while(test--)   {
        sandipan();
    }
    return 0;
}