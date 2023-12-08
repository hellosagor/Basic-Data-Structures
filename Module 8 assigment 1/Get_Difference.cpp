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
int borosongkha(node* head)
{
    int boro =INT_MIN;
    while(head !=NULL)
    {
        if(boro<head->val)
        {
            boro=head->val;
        }
        head=head->next;
    }
    return boro;
}
 int chotosongkha(node* head)
 {
    int choto =INT_MAX;
    while(head !=NULL)
    {
        if(choto>head->val)
        {
            choto=head->val;
        }
        head=head->next;
    }
    return choto;
 }
 void pathao(node* head,int val)
 {
    node* newnode= new node(val);
    newnode->next = head->next;
    head->next =newnode;

 }
int main()
{

     node* head=new node(0);
     int n;
     cin>>n;
     while( n!=-1)
     {
        pathao( head,n);
        cin>>n;
     }
     int boro=borosongkha(head->next);
     int choto=chotosongkha(head->next);
     cout<<boro-choto<<endl;
    return 0;
}
