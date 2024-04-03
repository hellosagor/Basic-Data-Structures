#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node* next;
    node* prev;
    node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void print_normal(node* head)
{
    node* tmp=head;
    while(tmp !=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;

} 
void print_reverse(node *tail)
{
     node* tmp=tail;
     while(tmp !=NULL)
     {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
     }
     cout<<endl;
}
void insert_position(node* head,int pos,int val)
{
    node* newnode=new node(val);
    node* tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    
    newnode->next=tmp->next;//100->30
    tmp->next=newnode;//20->100
    newnode->next->prev=newnode;//100<-30
    newnode->prev=tmp;//20<-100
}
int main()
{
    node* head=new node(10);
    node* a=new node(20);
    node* b=new node(30);
    node* c=new node(40);
    node* tail=c;
    //connection
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=c;
    c->prev=b;
    insert_position(head,2,100);
     print_normal(head);
     print_reverse(tail);
    return 0;
}