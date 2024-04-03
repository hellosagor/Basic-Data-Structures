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

node *notun_node(string a)
{
    if (a == "-1")
    {
        return NULL;
    }
    int val;
    stringstream ab(a);
    ab >> val;
    node *newnode = new node(val);
    return newnode;
}

node *tree_banao(vector<string> b)
{
    if (b.empty() || b[0] == "-1")
    {
        return NULL;
    }
    node *root = notun_node(b[0]);
    queue<node *> q;
    q.push(root);
    size_t i = 1;
    while (!q.empty() && i < b.size())
    {
        node *tmp = q.front();
        q.pop();

        if (i < b.size() && b[i] != "-1")
        {
            tmp->left = notun_node(b[i]);
            q.push(tmp->left);
        }
        i++;

        if (i < b.size() && b[i] != "-1")
        {
            tmp->right = notun_node(b[i]);
            q.push(tmp->right);
        }
        i++;
    }
    return root;
}

void abaro_notunnode(node *root, int l)
{
    if (root == NULL || l < 0)
    {
        cout << "Invalid";
        return;
    }
    queue<node *> q;
    q.push(root);
    int c = 0;
    bool paisi = false;
    while (!q.empty())
    {
        int ntcnt = q.size();
        if (c == l)
        {
            paisi = true;
            while (ntcnt > 0)
            {
                node *tmp = q.front();
                cout << tmp->val << " ";
                q.pop();
                ntcnt--;
            }
            break;
        }
        while (ntcnt > 0)
        {
            node *tmp = q.front();
            q.pop();
            if (tmp->left != NULL)
            {
                q.push(tmp->left);
            }
            if (tmp->right != NULL)
            {
                q.push(tmp->right);
            }
            ntcnt--;
        }
        c++;
    }
    if (!paisi)
    {
        cout << "Invalid";
    }
}

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    vector<string> b;
    string n;
    while (ss >> n)
    {
        b.push_back(n);
    }
    int l;
    cin >> l;
    node *root = tree_banao(b);
    abaro_notunnode(root, l);
    return 0;
}
