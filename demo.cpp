#include <bits/stdc++.h>
using namespace std;

int main()  {
    set<int> st = {1,2,3,4,5,6,7};
    auto lb = st.lower_bound(2);
    auto ub = st.lower_bound(2);
    cout << distance(lb, ub) << endl;
}