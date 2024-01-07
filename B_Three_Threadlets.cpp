#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define yy cout << "YES\n"
#define nn cout << "NO\n"

void Sandipan()    {
    
    vector<int> v(3);
    for(int i=0; i<3; i++)  cin >> v[i];
    sort(all(v));
    if(v[0]==v.back())  {
        yy;
        return;
    }
    v[2] -= v[0];
    v.push_back(v[0]);
    sort(all(v));
    if(v[0]==v.back())  {
        yy;
        return;
    }
    v[3] -= v[0];
    v.push_back(v[0]);
    sort(all(v));
    if(v[0]==v.back())  {
        yy;
        return;
    }
    v[4] -= v[0];
    v.push_back(v[0]);
    sort(all(v));
    if(v[0]==v.back())  {
        yy;
        return;
    }
    nn;
}

int main()  {
  int testCase;
  cin >> testCase;
  while(testCase--) Sandipan();
  return 0;
}