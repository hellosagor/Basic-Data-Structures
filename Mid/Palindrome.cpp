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
        this->prev = NULL;
    }
};
int palin(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return true;
    }
    node *suru = head;
    node *sesh = head;
    while (sesh->next != NULL)
    {
        sesh = sesh->next;
    }
    while (suru != sesh && sesh->prev != suru)
    {
        if (suru->val != sesh->val)

        {
            return false;
        }
        suru = suru->next;
        sesh = sesh->prev;
    }
    return (suru->val == sesh->val);
}
int main()
{

    node *head = NULL;
    node *tail = NULL;
    int n;
    while (cin >> n && n != -1)
    {
        node *newnode = new node(n);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }
    if (palin(head))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    while (head)
    {
        node *tmp = head;
        head = head->next;
        delete tmp;
    }
    return 0;
}
