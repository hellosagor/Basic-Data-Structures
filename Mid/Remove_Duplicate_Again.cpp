#include <bits/stdc++.h>
using namespace std;
int main()
{

    list<int> talika;
    int n;
    while (cin >> n && n != -1)
    {
        talika.remove(n);
        talika.push_back(n);
    }
    talika.sort();
    for (auto &&n : talika)
    {
        cout << n << " ";
    }
    cout << endl;
    return 0;
}