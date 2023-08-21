#include <bits/stdc++.h>
using namespace std;

void Sandipan()    {
    
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)  cin >> v[i];
    int gcd = v[0];
    for(auto it : v)    gcd = __gcd(gcd, it);
    cout << *max_element(v.begin(), v.end())/gcd << endl;
    
}



int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}