#include <bits/stdc++.h>
using namespace std;

void pss(int n){  
    if (n<=0){return;}

    vector<string> out;
    out.push_back("0");
    out.push_back("1");

    for (int i = 2; i< (1<<n); i = i <<1){
        for (int j = i-1; j >=0; j--){out.push_back(out[j]);}
        for (int j=0;j<i;j++){out[j] = "0" + out[j];}
        for (int j=i;j<2*i;j++){out[j] = "1" + out[j];}
    }  
    for (auto el:out){cout << el << '\n';}
}

int main(){
    int n;
    cin >> n;
    pss(n);
    return 0;
}