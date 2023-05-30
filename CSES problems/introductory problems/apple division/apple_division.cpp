#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    int n;
    ll tot = 0,out = INT_MAX;
    cin >> n;
    vector<int> weights(n);
    for (int i=0;i<n;i++){cin >> weights[i]; tot+= weights[i];}

    for (int i=0;i<(1<<n);i++){
        ll sum = 0;
        for (int j=0;j<n;j++){
            if (i&(1<<j)){sum += weights[j];}
        }
        
        out = min(out, abs((tot-sum) - sum));
    }

    cout << out;

    return 0;
}