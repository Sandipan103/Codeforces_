#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> rotate90(const vector<vector<int>>& matrix) {
    int n = matrix.size();   
    int m = matrix[0].size();
    vector<vector<int>> temp(m, vector<int>(n));

    for (int i=0; i<n; ++i)
        for (int j=0; j<m; ++j)
            temp[j][n-1-i] = matrix[i][j];

    return temp;
}

int solve(vector<int> v, vector<vector<int>> &temp, int index)   {
    int n = temp.size(), m = temp[0].size(), ans = 0;
    // cout << "temp :" << endl;
    // for(auto it : temp) {
    //     for(auto i : it)    cout << i << " ";
    //     cout << endl;
    // }
    // cout << endl << "-----------------" << endl;
    // cout << "v : " << endl;
    // for(auto it : v)    cout << it << " ";
    // cout << endl << "---------" << endl;
    if(index + m >= 12) return 0;
    bool f = true;
    for(int i=n-1; i>=0; i--)   {
        for(int j=0; j<m; j++)  {
            if(temp[i][j] == 1) {
                if(v[index+j])  return 0;
                else    v[index+j] = 1;
            }
        }
        int mini = *min_element(v.begin(), v.end());
        if(mini == 0 && v[index] != 0){
            for(int j=0; j<m; j++)  {
                if(temp[i][j] == 1) {
                    if(v[index+j] == 1)
                        v[index+j] = 0;
                }
            }
        }
        for(auto &it : v)   it -= mini;
        if(mini == 0)   f = false;
        if(f)   ans += mini;
        // cout << "i, mini, ans :  " << i << " " << mini << " " << ans << endl;
        // cout << "v : " << endl;
        // for(auto it : v)    cout << it << " ";
        // cout << endl << "---------" << endl;
    }
    return ans;
}

int main()  {
    vector<string> temp(13);
    for(int i=0; i<13; i++)     cin >> temp[i];
    char ch = temp[0][0];
    vector<int> v(12);
    for(int i=0; i<12; i++) v[i] = stoi(temp[i+1]);
    int ans = *min_element(v.begin(), v.end());
    for(auto &it : v)   it -= ans;

    map<char, vector<vector<int>>> mp;

    mp['I'] = {{1,1,1,1}};
    mp['O'] = {{1,1}, {1,1}};
    mp['L'] = {{1,0}, {1,0}, {1,1}};
    mp['J'] = {{0,1}, {0,1}, {1,1}};
    mp['S'] = {{0,1,1}, {1,1,0}};
    mp['Z'] = {{1,1,0}, {0,1,1}};
    mp['T'] = {{1,1,1}, {0,1,0}};

    int index = -1;
    for(int i=0; i<12; i++)
        if(v[i] == 0)   index = i, i = 13;
    
    // cout << "index : " << index << endl;
    if(index == -1) {
        cout << ans << endl;
        return 0;
    }
    int maxi = 0;

    vector<vector<int>> req = mp[ch];

    for(int i=0; i<4; i++)  {
        maxi = max(maxi, solve(v, req, index));
        if(index-1 >= 0)
        maxi = max(maxi, solve(v, req, index-1));
        if(index-2 >= 0)
        maxi = max(maxi, solve(v, req, index-2));
        if(index-3 >= 0)
        maxi = max(maxi, solve(v, req, index-3));
        if(index-4 >= 0)
        maxi = max(maxi, solve(v, req, index-4));
        if(ch == 'O')   break;
        if(ch == 'I' && i > 0)  break;
        req = rotate90(req);
    }


    cout << ans + maxi << endl;

    return 0;
}