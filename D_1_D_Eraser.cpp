#include <bits/stdc++.h>
using namespace std;


void Sandipan()    {
    
    int n, k, cnt = 0, i = 0;
    cin >> n >> k;
    string s;
    cin >> s;
    
    while(i < n)    {
        if(s[i] == 'B') cnt++, i += k;
        else    i++;
    }

    cout << cnt << endl;
}



int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}