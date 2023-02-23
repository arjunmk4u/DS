#include<iostream>
using namespace std;
int main()
{
    int i,n,e,a[20],loc;
    cout<<"Enter limit";
    cin>>n;
    cout<<"Enter elements";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element to delete";
    cin>>e;
    cout<<"Enter the position you want to delete";
    cin>>loc;
    e=a[loc];
    for(i=loc-1;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n=n-1;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}