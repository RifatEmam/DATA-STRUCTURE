#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,j,temp;
    cout<<"enter an array size : ";
    cin>>n;
    int a[n];
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


    for(i=1;i<n;i++){
        temp=a[i];
        j=i-1;

        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }

     cout<<"\nthe sorted array : ";
    for( i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }





return 0;
}
