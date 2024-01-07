#include <bits/stdc++.h>
using namespace std;

void Sandipan()    {
    
    int n, m, cnt = 0, ans = -1;
    string s, t;
    cin >> n >> m >> s >> t;
    while(n < m) cnt++, n*=2, s+=s;
    string temp = s + s;
    if(s.find(t) != string::npos) ans = cnt;
    else if(temp.find(t) != string::npos) ans = cnt+1;
    cout << ans << endl;

}

int main()  {
  int testCase;
  cin >> testCase;
  while(testCase--) Sandipan();
  return 0;
}