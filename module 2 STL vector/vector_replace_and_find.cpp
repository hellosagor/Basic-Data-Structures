#include<bits/stdc++.h>
using namespace std;
int main()
{
    //replace
    // vector<int>v={1,2,3,5,1,2,3,4,5,3,2};
    // replace(v.begin(),v.end(),2,100);
    // for(int x:v)
    // {
    //     cout<<x<<" ";
    // } 
    //fin
    vector<int>v={1,2,3,5,1,2,3,4,5,3,2};
    auto it=find(v.begin(),v.end(),100);
    if(it==v.end()) cout<<" Not found";
    else cout<<" found";
    return 0;
}