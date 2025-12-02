#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int n=s.size();
    int state=0;
    for(char c:s)
    {
        if(c=='1')
        {
            state=1-state;
        }
    }
    if(state==0)
    {
        cout<<"Accept";
    }
    else
    {
        cout<<"Reject";


    }



    return 0;
}
