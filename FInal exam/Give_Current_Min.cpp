#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, m;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    priority_queue<int, vector<int>, greater<int>> ab;
    for (int i = 0; i < n; i++)
    {
        ab.push(a[i]);
    }
    while (m--)
    {
        int pq;
        cin >> pq;
        if (pq == 0)
        {
            int s;
            cin >> s;
            ab.push(s);
            cout << ab.top() << endl;
        }
        else if (pq == 1)
        {
            if (ab.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << ab.top() << endl;
            }
        }
        else if (pq == 2)
        {
            if (ab.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                ab.pop();
                if (ab.empty())
                {
                    cout << "Empty" << endl;
                }
                else
                {
                    cout << ab.top() << endl;
                }
            }
        }
    }
    return 0;
}