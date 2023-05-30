#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, k;
    cin >>n>>k;
    vector<int> nums(n);
    for(int i=0;i<n;i++){cin>>nums[i];}
    int out=0;
    for (int i=0;i<n;i++){
        if (nums[i]<=0||nums[i]<nums[k-1]){break;}
        else{out++;}
    }
    cout << out;

    return 0;
}