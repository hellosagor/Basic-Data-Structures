#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    // while(n>0) O(logN complexity)
    // {
    //     int digit=n%10;
    //     cout<<digit<<endl;
    //     n/=10;
    // } 
    for ( int i=1;i<=n;i=1*2) //O(logN complexity)
    {
        cout<<i<<endl;
    }
    return 0;
}