#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
     int a[n];
     for(int i=0;i<n;i++) //O(n)
     {
        cin>>a[i];
     }
     int s=0;
     for(int i=0;i<n;i++)//O(n)
     {
        if(i%2==0)
        {
            s+=a[i];
        }
     }
     cout<<s<<endl;
    return 0;            //program maximam running time=O(N); 
}