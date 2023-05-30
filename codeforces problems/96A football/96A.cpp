#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    bool isdangerous=false;
    int ct=1;
    for (int i=1;i<s.size();i++){
        if(s[i]==s[i-1]){
            ct++;
            if (ct==7){isdangerous=true;break;}
        }
        else{ct=1;}
    }

    if(isdangerous){cout<<"YES";}
    else{cout << "NO";}
    return 0;
}