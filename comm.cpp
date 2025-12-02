#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int n=s.size();
    int i=0;

    while(1)
    {
        if(i>=n || !(isalpha (s[i]) || s[i]=='_'))
    {
        cout<<"invalid\n";
        return 0;

    }
    i++;
    while(i<n && (isalnum(s[i]) || s[i]=='_'))

        i++;

        if(i==n)
        {
            break;

        }
    if(s[i]!=',')
    {
        cout<<"invalid";
        return 0;

    }
    i++;
}

cout<<"valid\n";
return 0;
}
