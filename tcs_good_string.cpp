#include<bits/stdc++.h>
using namespace std;


void solve()    {
    string good, name;
    cin >> good >> name;
    unordered_set<char> st;
    for(auto c : good)  st.insert(c);
    vector<char> v;
    for(auto c : st)    v.push_back(c);
    sort(v.begin(), v.end());
    char prev = good[0];
    int cnt = 0;

    for(auto c : name)  {
        if(st.find(c) != st.end())
            continue;
        else if(c < v[0])    {
            cnt += abs(v[0] - c);
            prev = v[0];
        }
        else if(c > v.back())   {
            cnt += abs(v.back() - c);
            prev = v.back();
        }
        else    {
            int lb = lower_bound(v.begin(), v.end(), c) - v.begin();
            char prev_char = v[lb-1], next_char = v[lb];

            if(abs(c - prev_char) == abs(c - next_char))    {
                if(abs(prev - prev_char) > abs(prev - next_char))
                    cnt += abs(prev - next_char), prev = next_char;
                else
                    cnt += abs(prev - prev_char), prev = prev_char;
            }
            else    {
                if(abs(c - prev_char) < abs(c - next_char))
                    cnt += abs(c - prev_char), prev = prev_char;
                else 
                    cnt += abs(c - next_char), prev = next_char;
            }
        }
    }

    cout << cnt << endl;
}

int main()  {
    solve();
}