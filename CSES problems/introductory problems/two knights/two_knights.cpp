#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
    //IO
    long long N;
    cin >> N;
 
    vector<long long> out;
 
    //out = all perms - attackings
    out.push_back(0);
    out.push_back(6);
    out.push_back(28);
    out.push_back(96);
 
    for (long long i = 5; i <= 10000; i++){//for each chessboard  EXCLUDE FIRST 4
        long long allperms = ((i*i)*(i*i-1))/2;
        long long attackings = (((i-4)*(i-4)*8)+((i-4)*16)+((i-4)*24)+48)/2;//all attacking square amount /2 (we dont count double)
        out.push_back(allperms-attackings);
    }
 
    for (long long i = 0; i < N; i++){
        cout << out[i] << '\n';
    }
    return 0;
}