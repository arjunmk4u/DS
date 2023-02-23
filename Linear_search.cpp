#include<iostream>
using namespace std;
int main()
{
    int i,n,e,a[20],f=0;
    cout<<"Enter the limit";
    cin>>n;
    cout<<"Enter elements";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element you want to search";
    cin>>e;
    for ( i = 0; i < n; i++)
    {
        if(a[i]==e)
        {
            cout<<"Element found at position"<<i+1;
            f=1;
        }
    }
    if(f==0)
    {
        cout<<"Element not found";
    }
}