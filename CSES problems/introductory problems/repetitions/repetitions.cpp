#include <bits/stdc++.h>
using namespace std;
 
int main(){
    
    string s;
    cin >> s;
 
    int ct = 0;
    int out= 0;
    bool inseq;
    for (int i = 0; i <= s.size(); i++){
        if(s[i] == s[i+1]){
            ct++;
        }
        else{
            out = max(out, ct);
            ct = 0;
        }
    }
    
    cout << out + 1;
 
 
 
    return 0;
}