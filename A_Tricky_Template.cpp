#include <bits/stdc++.h>
using namespace std;

void Sandipan()    {
    
    int n;
    string a, b, c;
    cin >> n >> a >> b >> c;
    for(int i=0; i<n; i++)  {
        if(a[i] != c[i] && b[i] != c[i])    {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}


int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}