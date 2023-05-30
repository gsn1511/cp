#include <bits/stdc++.h>
using namespace std;

int main(){

    string s, newstr ="";
    cin>>s;
    int numsfreq[3]={0};

    for (char c:s){
        if(c=='1'){numsfreq[0]++;}
        else if(c=='2'){numsfreq[1]++;}
        else if(c=='3'){numsfreq[2]++;}
    }

    for (int i=0;i<3;i++){
        for (int j=0;j<numsfreq[i];j++){
            newstr += to_string(i+1) + "+";
        }
    }
    newstr.pop_back();

    cout << newstr;



    return 0;
}