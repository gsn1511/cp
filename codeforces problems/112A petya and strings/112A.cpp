#include <bits/stdc++.h>
using namespace std;

int main(){

    string s1, s2;
    cin>>s1>>s2;
    int out=0,s1val, s2val;

    transform(s1.begin(),s1.end(),s1.begin(), [](char c){return tolower(c);});
    transform(s2.begin(),s2.end(),s2.begin(), [](char c){return tolower(c);});
    for(int i=0;i<s1.size();i++){
        if(s1>s2){out=1;}
        if(s1<s2){out=-1;}
    }



    cout<<out;




    return 0;
}