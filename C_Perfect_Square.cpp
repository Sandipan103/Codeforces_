#include <bits/stdc++.h>
using namespace std;

#define vc vector<char>
#define vvc vector<vc>
#define all(v) v.begin(), v.end()
#define f(i, s, e)  for(int i=s; i<e; i++)

void rotateMat(vvc& v, int n)   {
    f(i, 0, n)  f(j, i, n)  swap(v[i][j], v[j][i]);
    f(i, 0, n)  reverse(v[i].begin(), v[i].end());
}

void Sandipan()    {
    
    int n;
    cin >> n;
    vvc v(n, vc(n));
    f(i, 0, n)  f(j, 0, n)  cin >> v[i][j];
    vvc r1 = v;     rotateMat(r1, n);
    vvc r2 = r1;    rotateMat(r2, n);
    vvc r3 = r2;    rotateMat(r3, n);
    int sum = 0;

    f(i, 0, n)  f(j, 0, n)  {
        vc temp = {v[i][j], r1[i][j], r2[i][j], r3[i][j]};
        sort(all(temp));
        for(int x=0; x<3; x++)  sum += temp.back() - temp[x];
    }

    cout << (sum/4) << endl;

}



int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--) Sandipan();
  
  return 0;
}