#include <bits/stdc++.h> 
using namespace std;

int main(){

    int n;
    cin>>n;
    int tram=0, out=0, num;
    while (n--){
        cin>>num;
        tram-=num;
        cin>>num;
        tram+=num;
        out=max(out,tram);
    }

    cout<<out;




    return 0;
}