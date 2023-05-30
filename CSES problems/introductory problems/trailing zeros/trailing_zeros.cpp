#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
 
int main(){
 
    ll N;
    cin >> N;
 
 
    ll ct = 5, out = 0;
 
    while(N >=ct){
        out+=N/ct;
        ct*=5;
    }
    cout << out;
    
    return 0;
}