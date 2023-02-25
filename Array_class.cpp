#include<iostream>
using namespace std;
class tdarray                                                       /*Two dimention array class and functions*/
{
    public:
    int b[30][30],i,n,j,m,e,f;
    tdarray()
    {
        f=0;
    }
    void storing();
    void traversing();
    void display();
};
void tdarray::display()
{
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<b[i][j]<< " \n"[j==n-1];
        }
    }
}  
void tdarray::traversing()
{
    cout<<"Enter the element you want to search";
    cin>>e;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(b[i][j]==e)
            {
                cout<<"Your element found at position "<<i<<j;
                f=1;
            }
        }
    }
    if(f==0)
    {
        cout<<"Element not found";
    }
}
void tdarray::storing()
{
    cout<<"Enter coloums";
    cin>>n;
    cout<<"Enter rows";
    cin>>m;
    cout<<"Enter "<<n*m<<" elements"<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"Enter element "<<i<<j;
            cin>>b[i][j];        
        }
    }
    cout<<"Your array succesfully stored";
    display();
}  
class arrayoperation                                               /*One dimention array class and functions*/
{
    public:                            
    int a[30],i,n,loc,f,e,temp,j;    
    arrayoperation()
    {
        f=0;
    }          
    void display();
    void storing();
    void insertion();
    void deletion();
    void traversing();
    void sorting();
};
void arrayoperation::display()
{
    for ( i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
    
}
void arrayoperation::sorting()
{
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    display();
}
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
    display();
}
void arrayoperation::insertion()
{
    cout<<"Enter the element you want to insert";
    cin>>e;
    cout<<"Enter the position you want to insert";
    cin>>loc;
    loc=loc-1;
    for(i=n-1;i>=loc;i--)
    {
        a[i+1]=a[i];
    }
    a[loc]=e;
    n=n+1;
    display();
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
    display();
}
void arrayoperation::traversing()
{
    cout<<"Enter the element you want to search";
    cin>>e;
    for (i=0;i<n;i++)
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
main()                                                            /*main function*/                                             
{
    int o,c;
    char yn;
    arrayoperation a;
    tdarray a1;
    do
    {
        cout<<"Store an array and do the remaining fuctions"<<endl;
        cout<<"Which array do you want to create?"<<endl<<"1D - 1\n2D - 2";
        cin>>c;
        if(c==1)
        {
            cout<<"Store a 1D array"<<endl;
            a.storing();
            cout<<"Enter the operation you want to perform\ninsertion - 1\nDeletion - 2\nFind an element - 3\nSorting the array - 4"<<endl;
            cin>>o;
            switch(o)
            {
                case 1: a.insertion();
                break;
                case 2: a.deletion();
                break;
                case 3: a.traversing();
                break;
                case 4: a.sorting();
                break;
                default: cout<<"Invalid operation";
            }
        }
        else if(c==2)
        {
            cout<<"Store a 2D array"<<endl;
            a1.storing();
            cout<<"Enter the operation you want to perform\ninsertion - 1"<<endl;
            cin>>o;
            switch(o)
            {
                case 1: a1.traversing();
                break;
                default: cout<<"Invalid operation";
            }
        }
        cout<<"\nDo you want to continue?(y/n)";
        cin>>yn;
    }while(yn=='y');
    return 0;
}