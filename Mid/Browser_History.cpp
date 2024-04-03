#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> thikanagula;
    string addrs;

    while (cin >> addrs && addrs != "end")
    {
        thikanagula.push_back(addrs);
    }

    int n;
    cin >> n;
    cin.ignore();
    auto bortoman = thikanagula.begin();

    while (n--)
    {
        string khujo;
        getline(cin, khujo);

        if (khujo.find("visit") == 0)
        {
            int n = khujo.find(" ") + 1;
            string paile = khujo.substr(n);
            auto it = find(thikanagula.begin(), thikanagula.end(), paile);

            if (it != thikanagula.end())
            {
                bortoman = it;
                cout << *bortoman << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (khujo == "next")
        {
            if (next(bortoman) != thikanagula.end())
            {
                ++bortoman;
                cout << *bortoman << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (khujo == "prev")
        {
            if (bortoman != thikanagula.begin())
            {
                --bortoman;
                cout << *bortoman << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }
    return 0;
}
