#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int out = 0, p,v,t;
    while (n--){
        cin>>p>>v>>t;
        if((p==1 && v==1)||(v==1&&t==1)||(p==1&&t==1)){out++;}
    }
    cout << out;

    return 0;
}