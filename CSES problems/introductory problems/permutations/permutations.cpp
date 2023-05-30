#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int N;
    cin >> N;
 
    vector<int> nums;
    for (int i = 1; i <= N; i++){
        nums.push_back(i);
    }
 
    
    
 
    if (N > 3){
        vector<int>out;
        for (int i = 1; i < N; i+=2){
            out.push_back(nums[i]);
        }
        for (int i = 0; i < N; i+=2){
            out.push_back(nums[i]);
        }
        for (int el : out){
            cout << el << " ";
        }
    }
    else if(N == 1){
        cout << 1;
    }
    else{
        cout << "NO SOLUTION";
    }
    return 0;
}