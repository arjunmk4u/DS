#include<iostream>
using namespace std;
class arrayoperation
{
    public:
    int a[30],i,n,loc,f,e;
    void storing();
    void insertion();
    void deletion();
    void traversing();
};
void arrayoperation::storing()
{
    cout<<"Enter limit";
    cin>>n;
    cout<<"Enter elements";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Your array succesfully stored";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}
void arrayoperation::insertion()
{
    cout<<"Enter the element you want to insert";
    cin>>e;
    cout<<"Enter the position you want to insert";
    cin>>loc;
    for(i=n-1;i>=loc;i--)
    {
        a[i+1]=a[i];
    }
    a[loc]=e;
    n=n+1;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}
void arrayoperation::deletion()
{
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
void arrayoperation::traversing()
{
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
main()
{
    int o;
    arrayoperation a;
    cout<<"Store an array and do the remaining fuctions"<<endl;
    a.storing();
    cout<<"Enter the operation you want to perform"<<endl<<
    "insertion - 1"<<endl<<
    "Deletion - 2"<<endl<<
    "Find an element - 3"<<endl;
    cin>>o;
    switch(o)
    {
        case 1: a.insertion();
        break;
        case 2: a.deletion();
        break;
        case 3: a.traversing();
        break;
        default: cout<<"Invalid operation";
    }
    return 0;
}