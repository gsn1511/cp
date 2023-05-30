#include <bits/stdc++.h>
using namespace std;

int main(){

    int xidx, yidx, num, out;
    for (int i =0;i<5;i++){
        for (int j=0;j<5;j++){
           cin >> num;
           if(num==1){xidx=j;yidx=i;}
        }
    }
    out = abs(xidx-2)+abs(yidx-2);

    cout <<out;

    return 0;
}