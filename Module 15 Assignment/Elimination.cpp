#include <bits/stdc++.h>
using namespace std;
bool khalistring(string s)
{
    stack<char> st;
    for (char c : s)
    {
        if (!st.empty() && st.top() == '0' && c == '1')
        {
            st.pop();
        }
        else
        {
            st.push(c);
        }
    }
    return st.empty();
}
int main()
{

    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        if (khalistring(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}