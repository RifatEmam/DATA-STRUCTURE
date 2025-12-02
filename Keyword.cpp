#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<string> kw= {"int","if","else","for","while","return","char","float","double","void"};
    string w;

    while(cin>>w)
    {
        if(kw.count(w))
        {
            cout<<w<<" : KEYWORD\n";
            continue;
        }

        int ok=1;
        if(!(isalpha(w[0])||w[0]=='_')) ok=0;
        for(char c:w) if(!(isalnum(c)||c=='_')) ok=0;

        if(ok) cout<<w<<" : IDENTIFIER\n";
        else cout<<w<<" : INVALID\n";
    }
}

