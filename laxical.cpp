#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int i=0,n=s.size();

    while(i<n)
    {
        if(isspace(s[i]))
        {
            i++;
            continue;
        }

        if(isalpha(s[i]) || s[i]=='_')
        {
            string t="";
            t+=s[i++];
            while(i<n && (isalnum(s[i])||s[i]=='_')) t+=s[i++];
            cout<<"IDENTIFIER "<<t<<"\n";
        }
        else if(isdigit(s[i]))
        {
            string t="";
            while(i<n && isdigit(s[i])) t+=s[i++];
            cout<<"NUMBER "<<t<<"\n";
        }
        else
        {
            cout<<"SYMBOL "<<s[i++]<<"\n";
        }
    }
}

