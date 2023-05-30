#include <bits/stdc++.h>
using namespace std;
 
int main(){
    
    int n;
    cin >> n;
 
    set<int>corrnums;
    for (int i = 1; i <= n; i++){corrnums.insert(i);}
    
    int a;
    for (int i = 0; i < n-1; i++){
        cin >> a;
        corrnums.erase(a);
    }
 
    for (int out: corrnums){
        cout << out;
    }
    return 0;
}