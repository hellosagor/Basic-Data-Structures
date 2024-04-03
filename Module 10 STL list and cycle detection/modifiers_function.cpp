#include<bits/stdc++.h>
using namespace std;
int main()
{

    list<int>mylist={10,20,30,40,50};
    // list<int>newlist;
    // // newlist=mylist;
    // mylist.pop_front();
    // mylist.insert(next(mylist.begin(),2),100);
    mylist.erase(next(mylist.begin(),2));
    for(int val:mylist)
    {
        cout<<val<<endl;
    } 
    return 0;
}