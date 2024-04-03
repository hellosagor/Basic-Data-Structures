#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        string s;
        getline(cin, s);
        stringstream a(s);
        map<string, int> mp;
        string b;
        int cnt = 0;
        string mx_cnt = " ";
        while (a >> b)
        {
            mp[b]++;
            if (mp[b] > cnt)
            {
                cnt = mp[b];
                mx_cnt = b;
            }
        }
        cout << mx_cnt << " " << cnt << endl;
    }
    return 0;
}