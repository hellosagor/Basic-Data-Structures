#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a;
    cin >> a;
    while (a--)
    {
        int n;
        cin >> n;
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        set<int> Bset;
        vector<int> folafol;
        for (int i = 0; i < n; i++)
        {
            if (Bset.insert(b[i]).second)
            {
                folafol.push_back(b[i]);
            }
        }
        sort(folafol.begin(), folafol.end());
        for (auto it = folafol.begin(); it != folafol.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
    return 0;
}