#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;
    node *left;
    node *right;
    node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void leaf(node *root, vector<int> &a)
{
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL)
    {
        a.push_back(root->val);
        return;
    }
    leaf(root->left, a);
    leaf(root->right, a);
}

int main()
{
    int val;
    node *root = NULL;
    queue<node *> q;
    while (cin >> val)
    {
        if (root == NULL)
        {
            root = new node(val);
            q.push(root);
        }
        else
        {
            node *bortoman = q.front();
            if (bortoman->left == NULL)
            {
                if (val != -1)
                {
                    bortoman->left = new node(val);
                    q.push(bortoman->left);
                }
            }
            else if (bortoman->right == NULL)
            {
                if (val != -1)
                {
                    bortoman->right = new node(val);
                    q.push(bortoman->right);
                }
                q.pop();
            }
        }
    }

    vector<int> a;
    leaf(root, a);
    sort(a.begin(), a.end(), greater<int>());
    for (size_t i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
