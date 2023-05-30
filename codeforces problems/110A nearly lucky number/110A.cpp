#include <bits/stdc++.h>
using namespace std;

int main(){

    string n;
    cin>>n;
    int luckyct=0;
    for (char c:n){
        if (c=='4'||c=='7'){luckyct++;}
    }
    if(luckyct==4||luckyct==7){cout<<"YES";}
    else cout<<"NO";

    return 0;
}