#include <bits/stdc++.h>
using namespace std;

int main(){

    int k,n,w;
    cin>>k>>n>>w;

    int cost = (((w*(w+1))/2)*k)-n;


    if (cost >0) cout << cost;
    else cout << 0;


    return 0;
}