#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >>n;
    int x=0,y=0,z=0, num;;
    while(n--){
        cin>>num;
        x+=num;
        cin>>num;
        y+=num;
        cin>>num;
        z+=num;
    }
    if(x==0&&y==0&&z==0){cout << "YES";}
    else cout<<"NO";

    return 0;
}