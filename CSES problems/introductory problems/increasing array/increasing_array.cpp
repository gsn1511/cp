#include <bits/stdc++.h>
using namespace std;
 
int main(){
    //IO
    long long N;
    cin >> N;
    
    vector<long long> nums(N);
    for (long long i = 0; i < N ;i++){
        cin >> nums[i];
    }
 
    //SOLVE
    long long out = 0;
    for (long long i = 1; i < N; i++){
        if ( nums[i-1]>nums[i]){
            out += abs(nums[i-1]-nums[i]);
            nums[i] = nums[i-1];
        }
    }
 
    cout << out;
    return 0;
}