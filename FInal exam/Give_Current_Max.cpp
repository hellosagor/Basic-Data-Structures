#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string nam;
    int roll;
    int mrk;
};

int main()
{
    int n, m;
    cin >> n;
    list<student> stdn;

    for (int i = 0; i < n; i++)
    {
        string nam;
        int roll, mrk;
        cin >> nam >> roll >> mrk;
        student stdns = {nam, roll, mrk};
        stdn.push_back(stdns);
    }

    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int c;
        cin >> c;

        if (c == 0)
        {
            string nam;
            int roll, mrk;
            cin >> nam >> roll >> mrk;
            student stdns = {nam, roll, mrk};
            stdn.push_back(stdns);

            auto mx_s = stdn.begin();
            for (auto it = stdn.begin(); it != stdn.end(); it++)
            {
                if (it->mrk > mx_s->mrk || (it->mrk == mx_s->mrk && it->roll < mx_s->roll))
                {
                    mx_s = it;
                }
            }
            cout << mx_s->nam << " " << mx_s->roll << " " << mx_s->mrk << endl;
        }
        else if (c == 1)
        {
            auto mx_s = stdn.begin();
            for (auto it = stdn.begin(); it != stdn.end(); it++)
            {
                if (it->mrk > mx_s->mrk || (it->mrk == mx_s->mrk && it->roll < mx_s->roll))
                {
                    mx_s = it;
                }
            }

            if (stdn.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << mx_s->nam << " " << mx_s->roll << " " << mx_s->mrk << endl;
            }
        }
        else if (c == 2)
        {
            if (stdn.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                auto mx_s = stdn.begin();
                for (auto it = stdn.begin(); it != stdn.end(); it++)
                {
                    if (it->mrk > mx_s->mrk || (it->mrk == mx_s->mrk && it->roll < mx_s->roll))
                    {
                        mx_s = it;
                    }
                }

                stdn.erase(mx_s);

                if (stdn.empty())
                {
                    cout << "Empty" << endl;
                }
                else
                {
                    mx_s = stdn.begin();
                    for (auto it = stdn.begin(); it != stdn.end(); it++)
                    {
                        if (it->mrk > mx_s->mrk || (it->mrk == mx_s->mrk && it->roll < mx_s->roll))
                        {
                            mx_s = it;
                        }
                    }
                    cout << mx_s->nam << " " << mx_s->roll << " " << mx_s->mrk << endl;
                }
            }
        }
    }

    return 0;
}
