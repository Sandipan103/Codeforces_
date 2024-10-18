#include <bits/stdc++.h>
using namespace std;


int solve(vector<int> &v, int n, int num, int pos)  {
    if(v[pos] == num)   return 0;
    int mini = INT_MAX;
    for(int i=0; i<n; i++)  {
        if(v[i] == num) {
            if(pos > i) {
                mini = min(mini, pos - i);
                mini = min(mini, i + n - pos);
            }
            else    {
                mini = min(mini, i - pos);
                mini = min(mini, pos + n - i) ;
            }
        }
    }

    return mini == INT_MAX ? -1 : mini;
}

int main()  {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)  cin >> v[i];
    int num, pos;
    cin >> num >> pos;
    cout << solve(v, n, num, pos) << endl;
}