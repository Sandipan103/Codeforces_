#include <bits/stdc++.h>
using namespace std;


void Sandipan()    {
    
    int n, m, k, x, aCnt = 0, bCnt = 0, com = 0;
    cin >> n >> m >> k;
    vector<int> a(k+1, 0), b(k+1, 0);
    for(int i=0; i<n; i++)  {
        cin >> x;
        if(x <= k)
            a[x] = 1;
    }
    for(int i=0; i<m; i++)  {
        cin >> x;
        if(x <= k)
            b[x] = 1;
    }
    for(int i=1; i<=k; i++) {
        if(a[i] == 0 && b[i] == 0)  {
            cout << "NO" << endl;
            return;
        }
        else if(a[i] == 1 && b[i] == 1)  com++;
        else if(a[i] == 1)  aCnt++;
        else    bCnt++;
    }
    if(aCnt > k/2 || bCnt > k/2 || aCnt+bCnt+com != k)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}



int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}