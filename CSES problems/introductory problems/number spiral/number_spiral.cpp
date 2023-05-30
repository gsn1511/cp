#include <bits/stdc++.h>
using namespace std;
 
int main(){
    //IO
    long long T;
    cin >> T;
 
    pair<long long, long long> nums;
    vector<long long> out(T);
    for (long long i=0;i<T;i++){//for each test case
        cin >> nums.first >> nums.second;
        
        //1, num, num 1, 2num, 2num,1...
        long long base = nums.first*nums.first - (nums.first-1);
        if (nums.first > nums.second){
            if (nums.first % 2 == 1){out[i] = (nums.first-1)*(nums.first-1)+nums.second;}//base is bigger
            else{out[i] = nums.first*nums.first-nums.second+1;}//base is smaller
        }
        else if (nums.first < nums.second){
            if (nums.second % 2 == 0){out[i] = (nums.second-1)*(nums.second-1)+nums.first;}//base is bigger
            else{out[i] = nums.second*nums.second-nums.first+1;}//base is smaller
        }
        else{
            out[i] = base;
        }
    }
    
    for (long long el:out){
        cout << el << '\n';
    }
 
    
 
 
    return 0;
}