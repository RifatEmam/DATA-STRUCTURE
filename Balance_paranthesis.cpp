#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int bal=0;
    for(char c:s)
    {
        if(c=='(')
        {
            bal++;
        }
        else if(c==')')
        {
            bal--;
        }
        if(bal<0)
        {
            cout<<"not balanced";
            return 0;
        }

    }

    if(bal==0)
    {
        cout<<"balanced";

    }
    else
    {
        cout<<"not balanced";
    }

    return 0;
}
