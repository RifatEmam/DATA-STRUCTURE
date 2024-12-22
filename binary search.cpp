#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,mid,i,value,pos=-1;
    cout<<"Enter an array element :  ";
    cin>>n;
    int a[n];
    cout<<"array elements are :  ";
    for( i=0; i<n; i++)
    {
        cin>>a[i];

    }
    cout<<"the array is   :  ";
    for( i=0; i<n; i++)
    {
        cout<<a[i]<<" ";

    }
    sort(a,a+n);
    cout<<"\nthe sorted array is : ";
    for( i=0; i<n; i++)
    {
        cout<<a[i]<<" ";

    }


    cout<<"\nthe value i am searching : ";
    cin>>value;

    int left=0,right=n-1;

    while(left<=right)
    {
        mid=(left+right)/2;

        if(value==a[mid])
        {
            pos=mid+1;
            break;
        }
        else if(value<a[mid])
        {
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }

    }
    if(pos == -1){
        cout<<"the value is not found ";
    }else{
    cout<<"the location of this value : "<<pos<<endl;
    }




    return 0;

}
