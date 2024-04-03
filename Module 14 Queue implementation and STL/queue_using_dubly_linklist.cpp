#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;
    node *next;
    node *prev;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL; // Fixing the typo
    }
};

class myqueue
{
    node *head = NULL;
    node *tail = NULL;
    int sz = 0;

public:
    void push(int val)
    {
        sz++;
        node *newnode = new node(val);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }

    void pop()
    {
        if (head == NULL)
            return;
        sz--;
        node *deletnode = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        }
        else
        {
            head->prev = NULL;
        }
        delete deletnode;
    }

    int front()
    {
        if (head == NULL)
            return INT_MIN;
        return head->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        return sz == 0;
    }
};

int main()
{
    myqueue q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}
