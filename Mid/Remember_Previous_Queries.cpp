#include <iostream>
#include <list>
using namespace std;

void talikaprintkoro(list<int> &lst)
{
    cout << "L -> ";
    for (auto it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    cout << "R -> ";
    auto it1 = lst.end();
    while (it1 != lst.begin())
    {
        --it1;
        cout << *it1 << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    list<int> lnklst;
    while (n--)
    {
        int p, q;
        cin >> p >> q;
        if (p == 0)
        {
            lnklst.push_front(q);
        }
        else if (p == 1)
        {
            lnklst.push_back(q);
        }
        else if (p == 2)
        {
            if (q >= 0 && q < lnklst.size())
            {
                auto it = lnklst.begin();
                while (q--)
                {
                    ++it;
                }
                lnklst.erase(it);
            }
        }
        talikaprintkoro(lnklst);
    }

    return 0;
}
