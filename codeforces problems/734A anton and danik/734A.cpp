#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    string s;
    cin>>s;
    int anton=0, danik=0;
    for (auto c:s){
        if (c=='A'){anton++;}
        if (c=='D'){danik++;}
    }
    if (anton==danik){cout<<"Friendship";}
    if (anton>danik){cout<<"Anton";}
    if (anton<danik){cout<<"Danik";}

    return 0;
}