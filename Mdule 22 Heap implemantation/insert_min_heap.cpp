#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        int curr_id = v.size() - 1;
        while (curr_id != 0)
        {
            int parent_id = (curr_id - 1) / 2;
            if (v[parent_id] > v[curr_id])
                swap(v[parent_id], v[curr_id]);
            else
                break;
            curr_id = parent_id;
        }
    }

    for (int val : v)
        cout << val << " ";
    return 0;
}