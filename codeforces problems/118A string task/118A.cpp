#include <bits/stdc++.h>
using namespace std;

int main(){

    string s, newstr="";
    cin>>s;

    for (int i=0;i<s.size();i++){
        if(s[i]=='A'||s[i]=='O'||s[i]=='Y'||s[i]=='E'||s[i]=='U'||s[i]=='I'||s[i]=='a'||s[i]=='o'||s[i]=='y'||s[i]=='e'||s[i]=='u'||s[i]=='i'){}else{newstr+='.'+string(1,tolower(s[i]));}
    }
    cout<<newstr;
    return 0;
}