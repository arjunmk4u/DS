#include<iostream>
using namespace std;
int main()
{
    int i,mid,pos=-1,first,last,n,e,a[20];
    cout<<"Enter limit of array";
    cin>>n;
    cout<<"Eneter elements";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"ENter the element you want to search";
    cin>>e;
    first=0;
    last=n-1;
    for(i=0;i<n;i++)
    {
        mid=(first+last)/2;
        if(a[mid]==e)
        {
            pos=mid+1;
            cout<<"Element found at position"<<pos;
            break;
        }
        else if(a[mid]>e)
        {
            last=mid-1;
        }
        else
        {
            first=mid+1;
        }
    }
    if(pos==-1)
    {
        cout<<"Element not found";
    }
}