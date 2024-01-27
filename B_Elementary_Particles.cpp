#include <bits/stdc++.h>
using namespace std;



void Sandipan()    {
    
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    unordered_map<int, int> mp;
    int maxi = -1;
    
    for(int i=0; i<n; i++)  {
        if(mp.find(v[i]) != mp.end())   
            maxi = max(maxi, mp[v[i]] + n - i);
        // else
            mp[v[i]] = i;
    }

    cout << maxi << endl;
    
}



int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}