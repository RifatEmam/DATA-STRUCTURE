#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter an array size : ";
    cin>>n;
    int a[n+1];
    cout<<"Enter an array Elements : ";
    for( i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cout<<"\nthe  array : ";
    for( i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    int value;
    int pos;
    cout<<"\nthe value i am insert: ";
    cin>>value;
    cout<<"\nposition to insert: ";
    cin>>pos;
    if(pos<0 || pos>n)
    {
        cout<<"position invalid ";

        return 1;
    }
    for(i=n; i>pos; i--)
    {
        a[i]=a[i-1];

    }
    a[pos]=value;
    n++;


    cout<<"\nupdated  array :  ";

    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    sort(a,a+n);
    cout<<"\nupdated sorted array :  ";

    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
