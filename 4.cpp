#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int i = 0;
    int n = s.size();


    while (i < n && s[i] == 'a')
    {
        i++;
    }
    int a = i;


    while (i < n && s[i] == 'b')
    {
        i++;
    }
    int b = i - a;


    if (i== n && a == b && a > 0)
    {
        cout << "Valid" << endl;
    }
    else
    {
        cout << "Invalid" << endl;
    }

    return 0;
}
