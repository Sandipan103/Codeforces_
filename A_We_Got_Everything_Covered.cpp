#include <bits/stdc++.h>
using namespace std;


#define f(i, s, e)  for(int i=s; i<e; i++)



void Sandipan()    {

    int n, k;
    cin >> n >> k;
    string s = "", ans;
    f(i, 0, k)  s.push_back('a' + i);
    f(i, 0, n)
        ans += s;
    cout << ans << endl;
}



int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}