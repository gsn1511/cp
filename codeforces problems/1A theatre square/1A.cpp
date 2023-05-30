#include <bits/stdc++.h>
using namespace std;

int main(){

    long long n,m,a;
    cin >>n>>m>>a;

    long long out, xamt, yamt;
    xamt = n/a;
    n%a==0?:xamt++;
    
    yamt = m/a;
    m%a==0?:yamt++;


    out = xamt*yamt;
    cout <<out;
    return 0;
}