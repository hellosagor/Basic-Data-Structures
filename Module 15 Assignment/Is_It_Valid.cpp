#include <bits/stdc++.h>
using namespace std;
string sothikstring(string &s)
{
    int a = 0;
    int b = 0;
    for (char c : s)
    {
        if (c == '0')
        {
            if (b > 0)
            {
                b--;
            }
            else
            {
                a++;
            }
        }
        else
        {
            if (a > 0)
            {
                a--;
            }
            else
            {
                b--;
            }
        }
    }
    if (a + b == 0)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string c;
        cin >> c;
        cout << sothikstring(c) << endl;
    }

    return 0;
}