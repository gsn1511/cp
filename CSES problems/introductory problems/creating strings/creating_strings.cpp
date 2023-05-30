#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    vector<string> out;

    sort(s.begin(), s.end());
    do{out.push_back(s);} while (next_permutation(s.begin(), s.end()));

    cout << out.size() << "\n";
    for(auto el:out){cout << el << "\n";}
    return 0;
}