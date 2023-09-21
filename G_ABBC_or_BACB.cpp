#include <bits/stdc++.h>
using namespace std;

#define ll long long int


void Sandipan()    {
    
    string s;
    cin >> s; 
    int c1 = 0, c2 = 0;
    for(auto&it : s){
        if(it == 'A')   c1++;
        else    c2++;
    }
    if(c2==0)   {
        cout << "0\n";
        return;
    }
    if(s[0]=='B' || s.back()=='B')  {
        cout << c1 << endl;
        return;
    }
    vector<int> v, temp;
    for(int i=0; i<s.length(); i++) 
        if(s[i] == 'B')     v.push_back(i);
    for(int i=1; i<v.size(); i++)   temp.push_back(v[i]-v[i-1]-1);
    temp.push_back(v[0]);
    temp.push_back(s.length() - v.back() - 1);
    sort(temp.begin(), temp.end());
    cout << c1 - temp[0] << endl;
    
}



int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}