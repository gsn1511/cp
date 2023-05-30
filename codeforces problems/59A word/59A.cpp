#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;

    int upperct=0, lowerct=0;
    for (char c:s){
        if (islower(c)){lowerct++;}
        else upperct++;
    }

    if (upperct>lowerct){transform(s.begin(),s.end(),s.begin(),[](char c){return toupper(c);});}
    else{transform(s.begin(),s.end(),s.begin(),[](char c){return tolower(c);});}
    cout <<s;
    return 0;
}