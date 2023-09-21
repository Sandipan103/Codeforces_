#include <bits/stdc++.h>
using namespace std;

void Sandipan()    {
    string s, x = "abc";
    bool flag = false;
    cin >> s;
    for(int i=0; i<3; i++)
        if(s[i] == x[i])    flag = true;
    if(flag) cout << "YES\n";
    else    cout << "NO\n";
}



int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}