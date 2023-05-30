#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    set<char> chars;
    for (auto c:s){chars.insert(c);}

    if(chars.size()%2==1){cout<<"IGNORE HIM!";}
    else{cout<<"CHAT WITH HER!";}

    return 0;
}