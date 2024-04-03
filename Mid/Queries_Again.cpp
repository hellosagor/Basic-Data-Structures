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
    void jogkoro(int indx, int val, node *&head, node *&tail)
    {
        node *newnode = new node(val);
        if (indx < 0 || (indx > 0 && head == NULL))
        {
            cout << "Invalid" << endl;
            return;
        }
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            if (indx == 0)
            {
                newnode->next = head;
                head->prev = newnode;
                head = newnode;
            }
            else
            {
                node *tmp = head;
                int cnt = 0;
                while (tmp != NULL && cnt < indx - 1)
                {
                    tmp = tmp->next;
                    cnt++;
                }
                if (tmp == NULL)
                {
                    cout << "Invalid" << endl;
                    return;
                }
                newnode->prev = tmp;
                newnode->next = tmp->next;
                if (tmp->next != NULL)
                {
                    tmp->next->prev = newnode;
                }
                else
                {
                    tail = newnode;
                }
                tmp->next = newnode;
            }
        }
        shamnerdikeprint(head);
        pechonerdikeprint(tail);
    }
    void shamnerdikeprint(node *head)
    {
        cout << "L -> ";
        node *tmp = head;
        while (tmp != NULL)
        {
            cout << tmp->val << " ";
            tmp = tmp->next;
        }
        cout << endl;
    }

    void pechonerdikeprint(node *tail)
    {
        cout << "R -> ";
        node *tmp = tail;
        while (tmp != NULL)
        {
            cout << tmp->val << " ";
            tmp = tmp->prev;
        }
        cout << endl;
    }
};
int main()
{
    int n;
    cin >> n;
    node *head = NULL;
    node *tail = NULL;
    node node(0);
    for (int i = 0; i < n; i++)
    {
        int m, n;
        cin >> m >> n;
        node.jogkoro(m, n, head, tail);
    }

    return 0;
}