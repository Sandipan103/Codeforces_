#include<bits/stdc++.h>
using namespace std;

int main()  {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)  cin >> v[i];
    map<pair<int, int>, int> mp;
    for(int i=0; i<n-1; i++)
        mp[{v[i], v[i+1]}]++;

    vector<int> ans;
    for(int i=0; i<n; i+=2)    {
        if(v[i] == v[i+1])  {
            if(mp[{v[i], v[i+1]}] == 1)
                ans.push_back(i), ans.push_back(i+1);
        }
        else if(mp.find({v[i+1], v[i]}) == mp.end())
            ans.push_back(i), ans.push_back(i+1);
    }
    
    if(ans.size() == 0) cout << "yes" << endl;
    else    {
        for(auto it : ans)
            cout << v[it] << " ";
        cout << endl;
    }
}