#include <bits/stdc++.h>
using namespace std;

unordered_set<int> st;

// tej
int main()  {
    int n, temp = 1;
    cin >> n;
    string s = "";
    while(n)    {
        if(n & 1)   
            s = to_string(temp) + s;
        n >>= 1;
        temp *= 2;
    }
    cout << s << endl;
}


//atma
// int solve(int n, int a, int b)  {
//     if(n <= 0 || st.find(n) != st.end())    return 0;
//     st.insert(n);
//     return 1 + solve(n-a, a, b) + solve(n-b, a, b);
// }

// int main()  {
//     int n, a, b;
//     cin >> n >> a >> b;
//     cout << solve(n, a, b) << endl;
// }