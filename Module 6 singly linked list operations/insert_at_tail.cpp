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
void insert_tail(node * &head,int v)
{
    node * newnode= new node(v);
    if(head == NULL)
    {
        head = newnode;
        cout<<endl<<"insert at head "<<endl<<endl;
        return;
    }
    node* tmp=head;
    while(tmp->next !=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next= newnode;
    
}
void print_list(node *  head)
{
    cout<<endl;
    cout<<"Your linked list: ";
    node * tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl<<endl;
}
void insert_at_position(node* head,int pos,int v)
{
    node* newnode=new node(v);
    node* tmp=head;
    for(int i=1;i<pos-1;i++)
    {
        tmp = tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
    cout<<endl<<endl<<" inserted at position "<<pos<<endl<<endl;

}
int main()
{

     node* head=NULL;
     while(true)
     {
        cout<<"option 1: insert at tail"<<endl;
        cout<<"option 2: print Linked list"<<endl;
        cout<<"option 3: insert at any position"<<endl;
        cout<<"option 4: terminate"<<endl;
        
     int op;
     cin>> op;
     if(op==1)
     {
        cout<<"please inter the value: ";
        int v;
        cin>>v;
        insert_tail(head,v);
     }
     else if(op==2)
     {
        print_list(head);
     }
     else if(op==3)
     {
        int pos,v;
        cout<<"inter position: ";
        cin>>pos;
        cout<<"Enter value: ";
        cin>>v;
        insert_at_position(head,pos,v);

     }
     else if(op==4)
     {
        break;
     }
     }
    return 0;
}