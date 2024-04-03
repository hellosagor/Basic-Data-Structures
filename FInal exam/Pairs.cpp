#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string fst;
    int sec;
};
bool parthokko(student &m, student &n)
{
    if (m.fst != n.fst)
    {
        return m.fst < n.fst;
    }
    return m.sec > n.sec;
}

int main()
{
    int n;
    cin >> n;
    vector<student> b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> b[i].fst >> b[i].sec;
    }

    sort(b.begin(), b.end(), parthokko);

    for (auto &mp : b)
    {
        cout << mp.fst << " " << mp.sec << endl;
    }

    return 0;
}
