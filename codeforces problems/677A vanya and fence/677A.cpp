#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n,h,num;
    cin>>n>>h;
    int out=0;
    while(n--){
        cin>>num;
        if(num>h){out+=2;}
        else{out++;}
    }
    cout<<out;
   


    return 0;
}