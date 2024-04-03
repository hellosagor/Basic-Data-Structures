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
int nonleaf(node *root)
{
    if (root == NULL || (root->left == NULL && root->right == NULL))
    {
        return 0;
    }
    int jog = 0;
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *bortoman = q.front();
        q.pop();
        if (bortoman->left != NULL || bortoman->right != NULL)
        {
            jog += bortoman->val;
        }
        if (bortoman->left != NULL)
        {
            q.push(bortoman->left);
        }
        if (bortoman->right != NULL)
        {
            q.push(bortoman->right);
        }
    }
    return jog;
}
int main()

{
    string s;
    getline(cin, s);
    stringstream a(s);

    int val;
    node *root = NULL;
    queue<node **> q;
    while (a >> val)
    {
        if (root == NULL)
        {
            root = new node(val);
            q.push(&(root->left));
            q.push(&(root->right));
        }
        else
        {
            node **bortoman = q.front();
            q.pop();
            if (val != -1)
            {
                *bortoman = new node(val);
                q.push(&((*bortoman)->left));
                q.push(&((*bortoman)->right));
            }
        }
    }
    int final = nonleaf(root);
    cout << final << endl;

    return 0;
}