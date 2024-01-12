#include <bits/stdc++.h>
using namespace std;

void Sandipan()    {
    
  long long n, ans = 0;
  string s;
  cin >> n >> s;
  set<char> st;

  for(auto it : s)  {
    st.insert(it);
    ans += st.size();
  }

  cout << ans << endl;
    
}



int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)
    Sandipan();
  
  return 0;
}