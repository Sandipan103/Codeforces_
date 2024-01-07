#include <bits/stdc++.h>
using namespace std;

#define ll long long
int mod = 998244353;

ll fact(ll x)    {
    ll temp = 1;
    for(ll i=1; i<=x; i++)  temp = (temp*1ll*i)%mod;
    return temp;
}

void Sandipan()    {
    
    string s;
    cin >> s;
    ll n = s.length(), i=1, ans = 0, del = 0;
    
    while(i<n)  {
      if(s[i] != s[i-1])  {
        i++;
        continue;
      }
      int j = i-1, x = s[i], cnt = 0;
      while(j<n && s[j]==x) j++, cnt++;
      i = j;
      del += cnt - 1;
      ans += cnt;
    }

    // cout << "ans : " << ans << endl;
    cout << del << " " << fact(ans) << endl;
    
}



int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}