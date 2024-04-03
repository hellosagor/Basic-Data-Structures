#include <bits/stdc++.h>
using namespace std;
class mystack
{
public:
    int mx = 1000001;
    int ar[1000001];
    int p = 0;
    void push(int val)
    {
        if (p == mx)
        {
            return;
        }
        ar[p++] = val;
    }
    int pop()
    {
        if (p == 0)
        {
            return -1;
        }
        return ar[p--];
    }
    bool empty()
    {
        return p == 0;
    }
};
class myqueue
{
public:
    int mx = 1000001;
    int ar[1000001];
    int shamne = 0;
    int pechone = 0;
    void que(int val)
    {
        if (pechone == mx)
        {
            return;
        }
        ar[pechone++] = val;
    }
    int que1()
    {
        if (shamne == pechone)
        {
            return -1;
        }
        return ar[shamne++];
    }

    bool empty()
    {
        return shamne == pechone;
    }
};

int main()
{

    int n, m;
    cin >> n >> m;
    mystack st;
    myqueue q;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        st.push(x);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        q.que(x);
    }
    bool soman_hole = true;
    while (!st.empty() && !q.empty())
    {
        int stt = st.pop();
        int qque = q.que1();
        if (stt != qque)
        {
            soman_hole = false;
            break;
        }
    }
    if (soman_hole && st.empty() && q.empty())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}