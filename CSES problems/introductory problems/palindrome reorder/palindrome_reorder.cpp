#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){

    string s, res;
    cin >> s;
    map<char, int> freq;
    

    for (char letter: s){freq[letter]++;}
    
    int check = 0;
    for (auto pair:freq){check += (pair.second % 2);}
    if (check > 1) {cout << "NO SOLUTION";return 0;}

    for (char c = 'A'; c <= 'Z'; c++) {
        if (freq[c] % 2 == 0) {
            for (int j = 0; j < freq[c] / 2; j++) {res.push_back(c);}
        }
    }

    for (auto pair : freq) {
        if (pair.second % 2 == 1) {
            for (int j = 0; j < pair.second; j++) {res.push_back(pair.first);}
        }
    }

    for (char c = 'Z'; c >= 'A'; c--) {
        if (freq[c] % 2 == 0) {
            for (int j = 0; j < freq[c] / 2; j++) {res.push_back(c);}
        }
    }

    cout << res << "\n";
   
	return 0;
}