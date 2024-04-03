#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    queue<string> l;
    while (n--)
    {
        int a;
        string b;
        cin >> a;
        if (a == 0)
        {
            cin >> b;
            l.push(b);
        }
        else
        {
            if (l.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                cout << l.front() << endl;
                l.pop();
            }
        }
    }
    return 0;
}