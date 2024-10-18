#include<bits/stdc++.h>
using namespace std;

string solve(string &s) {
    unordered_map<string, int> mp;
    string temp = "";
    for(auto c : s)     {
        if(  (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            temp.push_back(c);
        else    {
            transform(temp.begin(), temp.end(), temp.begin(),[]( char x)
                { return tolower(x); });
            if(temp.size())
                mp[temp]++;
            if(mp[temp] > 1)    return temp;
            temp = "";
        }
    }
    return "NONE";
}

int main()  {
    string s;
    getline(cin, s);
    cout << solve(s)  << endl;
    return 0;
}