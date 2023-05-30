#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int out = 0;
    string num;
    for (int i=0;i<n;i++){
        cin >> num;
        if(num[1]=='+'){out++;}
        if(num[1]=='-'){out--;}
    }
    cout<<out;



    return 0;
}