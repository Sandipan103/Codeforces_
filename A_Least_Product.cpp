#include <bits/stdc++.h>
using namespace std;

#define f(i, s, e)  for(int i=s; i<e; i++)


void Sandipan()    {
    
    int n, neg = 0, zero = 0, temp;
    cin >> n;
    f(i, 0, n)  {
        cin >> temp;
        if(temp == 0)   zero++;
        if(temp < 0)    neg++;
    }
    if(zero || (neg&1)) cout << "0" << endl;
    else    cout << "1" << endl << "1 0" << endl;
    
}



int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}