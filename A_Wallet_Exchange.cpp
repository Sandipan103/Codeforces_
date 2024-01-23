#include <bits/stdc++.h>
using namespace std;


void Sandipan()    {
    
    long long a, b;
    cin >> a >> b;
    a %= 2, b %= 2;
    if((a+b)&1) cout << "Alice" << endl;
    else    cout << "Bob" << endl;
    
}



int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}