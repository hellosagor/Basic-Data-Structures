#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node* next;
    node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void  insert_node(node*& head int val)
{
    if(head==NULL)
    {
        head=new head(val);
    }
    else
    {
        node* tmp=head;
        while(tmp->next !=NULL)
        {
            tmp= tmp->next;
        }
        tmp->next=new node(val);
    }
}
int search_linked_list(node* head int v)
{
    int indx=0;
    while(head !=NULL)
    {
        if(head->val==v)
        {
            return indx;
        }
        head = head->next;
        index++;
    }
    return -1;
}
void  free_linked_list(node* head)
{
    node* tmp;
    while(head !=NULL)
    {
        tmp=head;
        head=head->next;
        delete tmp;
    }
}
int main()
{

     int n;
     cin>>n;
     while(n--)
     {
        int val;
        node* head=NULL;
        while(true)
        {
            cin>>val;
            if(val==-1)
            {
                break;
            }
         insert_node(head,val);
        }
        int m;
        cin>>m;
        int indx=search_linked_list(head,m)
        if(indx !=-1)
        {
            cout<<indx<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
        free_linked_list(head);
     }
    return 0;
}