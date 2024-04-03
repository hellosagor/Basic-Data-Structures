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
node *tree_banao(int *ar, int n)
{
    if (n <= 0)
    {
        return NULL;
    }
    node *root = new node(ar[0]);
    queue<node *> q;
    q.push(root);
    int i = 1;
    while (!q.empty() && i < n)
    {
        node *bortoman = q.front();
        q.pop();
        if (i < n && ar[i] != -1)
        {
            bortoman->left = new node(ar[i]);
            q.push(bortoman->left);
        }
        i++;
        if (i < n && ar[i] != -1)
        {
            bortoman->right = new node(ar[i]);
            q.push(bortoman->right);
        }
        i++;
    }
    return root;
}
int nodeer_songkha(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return 1 + nodeer_songkha(root->left) + nodeer_songkha(root->right);
}
int hightnode(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftd = hightnode(root->left);
    int rightd = hightnode(root->right);
    return 1 + max(leftd, rightd);
}
bool sundor_node(node *root)
{
    if (root == NULL)
    {
        return true;
    }
    int kotogula_node = nodeer_songkha(root);
    int tree = hightnode(root);
    int kotogula_node_howauchit = 1;
    for (int i = 1; i <= tree; i++)
    {
        kotogula_node_howauchit *= 2;
    }
    kotogula_node_howauchit -= 1;
    return kotogula_node == kotogula_node_howauchit;
}
int main()
{

    int m;
    vector<int> a;
    while (cin >> m)
    {
        a.push_back(m);
    }
    node *root = tree_banao(&a[0], a.size());
    if (sundor_node(root))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}