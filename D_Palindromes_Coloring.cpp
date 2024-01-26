#include <bits/stdc++.h>
using namespace std;


void Sandipan()    {

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    unordered_map<char, int> mp;
    for(auto it : s)  mp[it]++;
    int pairCnt = 0, singleCnt = 0;
    for(auto it : mp) {
      pairCnt += it.second/2;
      singleCnt += it.second%2;
    }
    int ans = (pairCnt/k) * 2;
    pairCnt %= k;
    singleCnt += pairCnt*2;
    if(singleCnt >= k)  ans++;
    cout << ans << endl;
    
}


int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)
    Sandipan();
  
  return 0;
}