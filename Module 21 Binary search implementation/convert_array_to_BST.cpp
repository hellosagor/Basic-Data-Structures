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
node *convert(int a[], int n, int l, int r)
{
    if (l > r)
        return NULL;
    int mid = (l + r) / 2;
    node *root = new node(a[mid]);
    node *leftroot = convert(a, n, l, mid - 1);
    node *rootright = convert(a, n, mid + 1, r);
    root->left = leftroot;
    root->right = rootright;
    return root;
}
void level_order(node *root)
{
    if (root == NULL)
    {
        cout << "Tree nai" << endl;
        return;
    }
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *f = q.front();
        q.pop();
        cout << f->val << " ";
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}
int main()
{

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    node *root = convert(a, n, 0, n - 1);
    level_order(root);
    return 0;
}