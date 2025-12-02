#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
getline(cin,s);
int n=s.size();

if(n>=2 && s[n-2]=='0' && s[n-1]=='1'){
    cout<<"Accept";

}
else {

cout<<"Reject";


}


return 0;
}
