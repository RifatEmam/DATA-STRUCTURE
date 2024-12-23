#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    cout<<"Enter an array size :  ";
int n;
cin>>n;
cout<<"enter an element of array : ";
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
cout<<" the  array :  ";

for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}

sort(a,a+n);
cout<<"\n the sorted  array :  ";

for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}


return 0;
}
