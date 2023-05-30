#include <bits/stdc++.h>
using namespace std;

int main(){

    int a, b;
    cin>>a>>b;
    int out=0;
    while(b>=a){
        a*=3;
        b*=2;
        out++;
    }
    cout<<out;




    return 0;
}