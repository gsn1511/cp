#include <bits/stdc++.h>
using namespace std;
 
int main(){
    
    long long N;
    cin >> N;
 
    vector<long long> out;
 
    while (N != 1){
        out.push_back(N);
        if (N % 2 == 0){ N = N/2;}
        else{N = N*3 +1;}
    }
    out.push_back(1);
 
    for (long long el: out){cout << el << " ";}
 
    return 0;
}