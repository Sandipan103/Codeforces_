#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &v)  {
    for(auto it : v)    
        cout << it << " ";
    cout << endl << "--------------------------"  << endl;
}


void Sandipan()    {
    
    int n, l, x;
    cin >> n >> l;
    vector<int> v(l, 0);
    
    for(int i=0; i<n; i++)  {
        cin >> x;
        for(int j=0; j<l; j++)  
            if(x & (1<<j))
                v[j]++;
    }

    // cout << "printing v : " << endl;
    // print(v);

    x = 0;
    for(int i=0; i<l; i++)  {
        if(v[i] > n-v[i])
            x |= (1<<i);
    }

    cout << x << endl;
    
}



int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}