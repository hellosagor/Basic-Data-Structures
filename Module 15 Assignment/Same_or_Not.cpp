#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, m;
    cin >> n >> m;
    stack<int> st;
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    bool soman_hole = true;
    while (!st.empty() && !q.empty())
    {
        int s_top = st.top();
        int q_frnt = q.front();
        if (s_top != q_frnt)
        {
            soman_hole = false;
            break;
        }
        st.pop();
        q.pop();
    }
    if (st.empty() != q.empty())
    {
        soman_hole = false;
    }
    if (soman_hole)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}