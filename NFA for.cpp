#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int n=s.size();
    int q0=1,q1=0;

    for(char c:s)
    {
        int nq0=0;
        int nq1=0;
        if(q0 && c=='a'){
            nq1=1;
        }
        else if(q1 && (c=='b' || c=='c')){
            nq1=1;
        }

        q0=nq0;
        q1=nq1;



    }
    if(q1){
        cout<<"Accept";
    }else {

    cout<<"Reject";

    }




    return 0;
}

