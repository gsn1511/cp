#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long N = 0;
    cin >> N;
    long long m = 1000000007;
    
    int out = 1;
 
    for (int i = 0; i < N; i++) {
        out *= 2;
        out %= m;
    }
 
    cout << out;
 
 
 
    return 0;
}