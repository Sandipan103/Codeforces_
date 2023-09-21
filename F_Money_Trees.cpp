#include <bits/stdc++.h>
using namespace std;

#define ll long long int


void Sandipan()    {
    
    ll n, k, i=0, j=0, maxi = 0, total = 0;
    cin >> n >> k;
    vector<ll> fr(n), h(n);
    for(int i=0; i<n; i++)  cin >> fr[i];
    for(int i=0; i<n; i++)  cin >> h[i];
    
    i=1, j=1;

    if(fr[0] <= k)  total = fr[0], maxi = 1, j = 0;

    while(i<n)  {

        if(h[i-1]%h[i] == 0)    {
            total = total + 0ll + fr[i];
            if(total <= k)  maxi = max(maxi, i-j+1);
            else    {
                while(total > k && j<n)    {
                    total -= fr[j++];
                }
            }
            if(total <= k)  maxi = max(maxi, i-j+1);
        }

        else    {
            total = fr[i];
            j = i;
            if(total <= k)  maxi = max(maxi, i-j+1);
        }

        i++;
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