#include <bits/stdc++.h>
using namespace std;



void Sandipan()    {
    
    int n;
    cin >> n;
    bool r = false, l = false, u = false, d = false;
    for(int i=0; i<n; i++)  {
        int x, y;
        cin >> x >> y;
        if(x > 0)   r = true;
        if(x < 0)   l = true;
        if(y > 0)   u = true;
        if(y < 0)   d = true;
    }
    if((r & l & u & d)) 
        cout << "NO" << endl;
    else    cout << "YES" << endl;
    
}



int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}