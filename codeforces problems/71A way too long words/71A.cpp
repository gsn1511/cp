#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >>n;
    while (n--){
        string word, newword;
        cin>>word;

        if (word.size()<=10){newword=word;}
        else{
            newword = word[0]+ to_string(word.size()-2)+word[word.size()-1];
        }

        cout<<newword<<"\n";
    }

    return 0;
}