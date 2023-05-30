#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, num;
    set<int> nums;
    cin >> n;
    while (n--){
        cin >> num;
        nums.insert(num);
    }
    cout << nums.size();
    return 0;
}