#include<bits/stdc++.h>
using namespace std;

// void sandipan() {
//     int n, m, k;
//     cin >> n >> m >> k;
//     bool flag = false;
//     string vika;
//     int x, y;
//     cin >> x >> y;
//     if((x+y) % 2 == 0)  vika = "even";  // chess board black position
//     else    vika = "odd";   // chess board white position

//     for(int i=0; i<k; i++)  {
//         cin >> x >> y;
//         if((x+y) % 2 == 0 && vika == "even") flag = true;
//         else if((x+y) % 2 != 0 && vika == "odd")    flag = true;
//     }

//     if(flag) cout << "NO" << endl;
//     else    cout << "YES" << endl;
// }

void sandipan() {
    int n, m, k, x, y, a, b;
    cin >> n >> m >> k;
    cin >> x >> y;
    bool flag = false;
    for(int i=0; i<k; i++)  {
        cin >> a >> b;
        if((a+b)%2 == (x+y)%2)  flag = true;
    }
    if(flag) cout << "NO" << endl;
    else    cout << "YES" << endl;
}

int main()  {
    int test;
    cin >> test;
    while(test--)   sandipan();
    return 0;
}