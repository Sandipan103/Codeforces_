#include <bits/stdc++.h>
using namespace std;

void Sandipan()
{

    int q;
    cin >> q;
    map<int, set<int>> countToBall;
    vector<int> ballToCount(1000006, 0);

    for (int i = 0; i < q; i++)
    {
        int type, x;
        cin >> type;
        if (type == 1)
        {
            cin >> x;
            if (ballToCount[x] == 0)
            {
                ballToCount[x] = 1;
                countToBall[1].insert(x);
            }
            else
            {
                int currCount = ballToCount[x];
                ballToCount[x]++;
                countToBall[currCount + 1].insert(x);
                if (countToBall[currCount].size() == 1)
                    countToBall.erase(currCount);
                else
                    countToBall[currCount].erase(x);
            }
        }
        if (type == 2)
        {
            cin >> x;
            if (ballToCount[x] == 0)
                continue;
            int currCount = ballToCount[x];
            ballToCount[x]--;
            if (countToBall[currCount].size() == 1)
                countToBall.erase(currCount);
            else 
                countToBall[currCount].erase(x);
            if (currCount - 1 >= 1)
                countToBall[currCount - 1].insert(x);
        }
        if (type == 3)
        {
            if (countToBall.size() == 0)
            {
                cout << "0" << endl;
                continue;
            }
            auto it = countToBall.end();
            it--;
            cout << countToBall[it->first].size() << endl;
        }
        if (type == 4)
        {
            if (countToBall.size() == 0)
            {
                cout << "0" << endl;
                continue;
            }
            auto it = countToBall.begin();
            cout << countToBall[it->first].size() << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Sandipan();

    return 0;
}