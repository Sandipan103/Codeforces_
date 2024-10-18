#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    stack<char> st;
    for (auto c : s)
    {
        while (st.size() >= 2)
        {
            char c1 = st.top();
            st.pop();
            char c2 = st.top();
            st.pop();
            if (c1 != c2)
            {
                if ('a' != c1 && 'a' != c2)
                    st.push('a');
                else if ('b' != c1 && 'b' != c2)
                    st.push('b');
                else st.push('c');
            }
            else
            {
                st.push(c2);
                st.push(c1);
                break;
            }
        }
        st.push(c);
    }

    while (st.size() >= 2)
    {
        char c1 = st.top();
        st.pop();
        char c2 = st.top();
        st.pop();
        if (c1 != c2)
        {
            if ('a' != c1 && 'a' != c2)
                st.push('a');
            else if ('b' != c1 && 'b' != c2)
                st.push('b');
            else st.push('c');
        }
        else
        {
            st.push(c2);
            st.push(c1);
            break;
        }
    }

    cout << st.size() << endl;
}